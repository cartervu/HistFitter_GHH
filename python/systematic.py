"""
 **********************************************************************************
 * Project: HistFitter - A ROOT-based package for statistical data analysis       *
 * Package: HistFitter                                                            *
 * Class  : Systematic                                                            *
 * Created: November 2012                                                         *
 *                                                                                *
 * Description:                                                                   *
 *      Class to define a systematic                                              *
 *                                                                                *
 * Authors:                                                                       *
 *      HistFitter group, CERN, Geneva                                            *
 *                                                                                *
 * Redistribution and use in source and binary forms, with or without             *
 * modification, are permitted according to the terms listed in the file          *
 * LICENSE.                                                                       *
 **********************************************************************************
"""

from ROOT import THStack,TLegend,TCanvas,TFile,TH1F
from ROOT import ConfigMgr,FitConfig  #from gSystem.Load("libSusyFitter.so")
from histogramsManager import histMgr
from copy import deepcopy
from logger import Logger
from ROOT import gROOT

from configManager import replaceSymbols

log = Logger('Systematic')

###############################################
# Systematic is a function which returns an object. This object can be a
# TreeWeightSystematic or a UserSystematic. These classes are derived classes
# and the Baseclass for both of them is the SystematicBase. In
# TreeWeightSystematic the set of the weights differs for the systematic type
# tree and weight. Therefore, the functions PrepareWAHforWeight
# or PrepareWAHforTree exist. All three types of systematics share the
# "FillUpDownHist" (for the methods "userNormHistoSys" or "normHistoSys") and
# "tryAddHistos" function in the Baseclass SystematicBase.
###############################################

class SystematicBase:
    def __init__(self, name="", nominal=None, high=None, low=None,
                 type="", method="", constraint="Gaussian"):
        self.name = name  # Name to give the systematic
        self.type = type  # Is the systematic weights based or tree based?
        self.method = method  # What HistFactory method to use?
        self.nominal = nominal  # What's the nominal tree name or weights list?
        self.high = high  # What is the +1sig tree name or weights list?
        self.low = low  # What is the -1sig tree name or weights list?
        self.sampleList = []
        self.merged = False
        self.nFound = 0
        self.filesHi = {}
        self.filesLo = {}
        self.treeLoName = {}
        self.treeHiName = {}
        self.allowRemapOfSyst = False
        self.differentNominalTreeWeight = False

        if not constraint == "Gaussian" and not (method == "shapeSys" or method == "shapeStat"):
            raise ValueError("Constraints can only be specified for shapeSys")

        self.constraint = constraint

        allowedSys = ["histoSys","overallSys","userOverallSys","overallHistoSys","normHistoSys",
                      "shapeSys","shapeStat","histoSysOneSide","histoSysOneSideSym","normHistoSysOneSide","normHistoSysOneSideSym","userHistoSys","userNormHistoSys",
                      "overallNormHistoSys","overallNormHistoSysOneSide","overallNormHistoSysOneSideSym", "overallNormSys", 
                      "normHistoSysEnvelopeSym", "histoSysEnvelopeSym", "overallNormHistoSysEnvelopeSym" ]

        if not self.method in allowedSys:
            raise Exception("Given method %s is not known; use one of %s"
                             % (self.method, allowedSys))

        log.debug("Defining new systematic '{0}' of type {1}".format(self.name, self.method))

    def Clone(self, name=""):
        """ 
        Copy the systematic

        @param name An optional new name. If empty, the current name is used
        """
        newSyst = deepcopy(self)
        if not name == "":
            newSyst.name = name
        return newSyst

    def Reset(self):
        self.nFound = 0
        return

    def mergeSamples(self, sampleList):
        if not self.method == "shapeSys":
            raise TypeError("ERROR: can only merge samples for shapeSys")
        self.merged = True
        self.sampleList = sampleList
        return

    def foundSample(self):
        self.nFound += 1
        return

    def isMerged(self):
        if self.nFound == len(self.sampleList):
            return True
        else:
            return False

    #def setFileList(self, sample, filelist):
        #"""
        #Set file list for this Systematic directly

        #@param sample The Sample to set the files for
        #@param filelist A list of filenames
        #"""
        #self.filesLo[sample] = filelist
        #self.filesHi[sample] = filelist

    #def setFile(self, sample, file):
        #"""
        #Set a file for this Systematic directly
        
        #@param sample The Sample to set the file for
        #@param filelist A filename
        #"""
        #self.filesLo[sample] = [file]
        #self.filesHi[sample] = [file]

    #def setTreeName(self, sampleName, treeName):
        #"""
        #Set name of the tree for a sample
        
        #@param sampleName Name of the sample
        #@param treeName Tree name to set for the sample
        #"""
        #self.treeLoName[sampleName] = treeName
        #self.treeHiName[sampleName] = treeName
        #return

    #def setLoTreeName(self, sampleName, treeName):
        #"""
        #Set name of the tree for a sample for -1 sigma variations only
        
        #@param sampleName Name of the sample
        #@param treeName Tree name to set for the sample
        #"""
        #self.treeLoName[sampleName] = treeName
        #return

    #def setHiTreeName(self, sampleName, treeName):
        #"""
        #Set name of the tree for a sample for +1 sigma variations only
        
        #@param sampleName Name of the sample
        #@param treeName Tree name to set for the sample
        #"""
        #self.treeHiName[sampleName] = treeName
        #return

    #def setHiFileList(self, sample, filelist):
        #"""
        #Set file list for +1 sigma variations only
        
        #@param sampleName Name of the sample
        #@param treeName Tree name to set for the sample
        #"""
        #self.filesHi[sample] = filelist
        #return

    #def setLoFileList(self, sample, filelist):
        #"""
        #Set file list for -1 sigma variations only
        
        #@param sampleName Name of the sample
        #@param treeName Tree name to set for the sample
        #"""
        #self.filesLo[sample] = filelist
        #return

    def FillUpDownHist(self, lowhigh="", regionString="", normString="",
                       normCuts="", abstract=None, topLvl=None, chan=None, sam=None):
        
        _allowed_methods = ["userNormHistoSys", 
                            "overallNormSys", "normHistoSys", 
                            "normHistoSysOneSide", "normHistoSysOneSideSym", 
                            "normHistoSysEnvelopeSym", "overallNormHistoSys", 
                            "overallNormHistoSysEnvelopeSym", "overallNormHistoSysOneSide", "overallNormHistoSysOneSideSym"]
        
        if not (self.method in _allowed_methods and (not sam.noRenormSys)):
            log.debug("FillUpDownHist: systematic {} for sample {} not remapped - returning".format(self.name, sam.name))
            return

        histName = "h" + sam.name + self.name + lowhigh + normString + "Norm"
        if not histName in abstract.hists.keys():
            log.error("FillUpDownHist: systematic {}: histogram {} already exists!".format(self.name, histName))
            return

        if not sam.normRegions: 
            log.error("    %s but no normalization regions specified for sample %s, noRenormSys=%s. This is not safe, please fix." % (self.method, sam.name, sam.noRenormSys))
            normChannels = []
            tl = sam.parentChannel.parentTopLvl
            for ch in tl.channels:
                if (ch.channelName in tl.bkgConstrainChannels) or (ch.channelName in tl.signalChannels):
                    normChannels.append((ch.regionString,ch.variableName))
                    pass
                pass
            sam.setNormRegions(normChannels)
            log.warning("            For now, using all non-validation channels by default: %s" % sam.normRegions)

        normString = ""
        for normReg in sam.normRegions:
            if not type(normReg[0]) == "list":
                normList = [normReg[0]]
                c = topLvl.getChannel(normReg[1],normList)
            else:
                c = topLvl.getChannel(normReg[1],normReg[0])
            normString += c.regionString
       
        # Attempt to read from the cache fileout without fallback
        # If it fails, set this silly boolean and still go into the block below
        # Necessary, or we end up with nominal == high == low and removed systematics.

        reread = False
        if not abstract.readFromTree:
            abstract.hists[histName] = None
            abstract.prepare.addHisto(histName, forceNoFallback=True)
            if abstract.hists[histName] == None and abstract.useCacheToTreeFallback: reread = True

        if not abstract.readFromTree and not reread:
            log.error("FillUpDownHist: systematic {}: histogram {}: not reading from trees and no fallback enabled. Will not build histogram".format(self.name, histName))
            return
            
        abstract.hists[histName] = TH1F(histName, histName, 1, 0.5, 1.5)

        for normReg in sam.normRegions:
            if not type(normReg[0]) == "list":
                normList = [normReg[0]]
                c = topLvl.getChannel(normReg[1],normList)
            else:
                c = topLvl.getChannel(normReg[1],normReg[0])

            try:
                s = c.getSample(sam.name)
            except:
                # assume that if no histogram is made,
                # then it is not needed
                continue

            systNorm = s.getSystematic(self.name)

            # if the systematic has a dedicated file
            # list, use it

            if 'Low' in lowhigh:
                if s.name in systNorm.filesLo:
                    filelist = systNorm.filesLo[s.name]
                else:
                    # otherwise - take the sample file list
                    filelist = s.files
                
                if s.name in systNorm.treeLoName:
                    treeName = systNorm.treeLoName[s.name]
                else:
                    # otherwise - take the default tree name
                    # for the sample
                    if self.type == "tree":
                        treeName = s.treeName + systNorm.low
                    else:
                        treeName = s.treeName
                
                if self.type == "tree" and (treeName == '' or treeName == systNorm.low):
                    # checking if the sample tree name should have a prefix, if yes use this                                
                    if s.prefixTreeName == '':
                        treeName = s.name + systNorm.low
                    else:
                        treeName = s.prefixTreeName + systNorm.low

            if 'High' in lowhigh:
                if s.name in systNorm.filesHi:
                    filelist = systNorm.filesHi[s.name]
                else:
                    # otherwise - take the sample file list
                    filelist = s.files
                
                if s.name in systNorm.treeHiName:
                    treeName = systNorm.treeHiName[s.name]
                else:
                    # otherwise - take the default tree name
                    # for the sample
                    if self.type == "tree":
                        treeName = s.treeName + systNorm.high
                    else:
                        treeName = s.treeName
                
                if self.type == "tree" and (treeName == '' or treeName == systNorm.high):    
                    # checking if the sample tree name should have a prefix, if yes use this
                    if s.prefixTreeName == '':
                        treeName = s.name + systNorm.high
                    else:
                        treeName = s.prefixTreeName + systNorm.high

            if 'Nom' in lowhigh:
                filelist = s.files
                # take the default tree name
                # for the sample
                if self.type == "tree":
                    treeName = s.treeName + systNorm.nominal
                else:
                    treeName = s.treeName
                
                ## possibly rename treename
                if self.type == "tree" and (treeName == '' or treeName == systNorm.nominal):
                    # checking if the sample tree name should have a prefix, if yes use this
                    if s.prefixTreeName == '':
                        treeName = s.name + systNorm.nominal
                    else:
                        treeName = s.prefixTreeName + systNorm.nominal                           

            # weight-based trees assuming up/down are in one tree have identical name for up/low
            # if our current name does not exist, we assume this one does
            if self.type == "weight" and (not abstract.prepare.checkTree(treeName, filelist)):
                if s.prefixTreeName == '':
                    treeName = s.name + abstract.nomName
                else:
                    treeName = s.prefixTreeName + abstract.nomName

            log.verbose("s.name %s" % s.name)
            log.verbose("sam.name %s" % sam.name)
            #log.verbose("systNorm high %s" % systNorm.high)
            #log.verbose("systNorm low %s" % systNorm.low)
            log.verbose("treeName %s" % treeName)

            log.debug("FillUpDownHist(): calling prepare.read()")
            abstract.prepare.read(treeName, filelist)

            tempHist = TH1F("temp", "temp", 1, 0.5, 1.5)

            if systNorm.type == "tree":
                log.verbose("normalization region %s" % ("".join(normReg[0])))
                log.verbose("normalization cuts %s" % (abstract.cutsDict["".join(normReg[0])]))
                log.verbose("current chain %s" %  abstract.prepare.currentChainName)
                log.verbose("projecting string %s" % (str(abstract. lumiUnits*abstract.outputLumi/abstract.inputLumi) + " * " + "*". join(s.weights) + " * (" + abstract.cutsDict["".join(normReg[0])] + ")"))

                abstract.chains[abstract.prepare.currentChainName].Project("temp",abstract.cutsDict["".join(normReg[0])],str(abstract.lumiUnits*abstract.outputLumi/abstract.inputLumi)+" * "+"*".join(s.weights)+" * ("+abstract.cutsDict["".join(normReg[0])]+")")
                abstract.hists[histName].SetBinContent(1,abstract.hists[histName].GetSum()+tempHist.GetSumOfWeights())
            elif systNorm.type == "weight":
                log.verbose("normalization region %s" % ("".join(normReg[0])))
                log.verbose("normalization cuts %s" % (abstract.cutsDict["".join(normReg[0])]))
                log.verbose("current chain %s" %  abstract.prepare.currentChainName)
                log.verbose("projecting string %s" % (str(abstract.lumiUnits*abstract.outputLumi/abstract.inputLumi)+" * "+"*".join(s.weights)+" * ("+abstract.cutsDict["".join(normReg[0])]+")"))

                if 'High' in lowhigh:
                    abstract.chains[abstract.prepare.currentChainName].Project("temp",abstract.cutsDict["".join(normReg[0])],str(abstract.lumiUnits*abstract.outputLumi/abstract.inputLumi)+" * "+"*".join(s.systDict[systNorm.name].high)+" * ("+abstract.cutsDict["".join(normReg[0])]+")")
                elif 'Low' in lowhigh:
                    abstract.chains[abstract.prepare.currentChainName].Project("temp",abstract.cutsDict["".join(normReg[0])],str(abstract.lumiUnits*abstract.outputLumi/abstract.inputLumi)+" * "+"*".join(s.systDict[systNorm.name].low)+" * ("+abstract.cutsDict["".join(normReg[0])]+")")

                abstract.hists[histName].SetBinContent(1,abstract.hists[histName].GetSum()+tempHist.GetSumOfWeights())
            del tempHist

        return

    def tryAddHistos(self, highorlow="", regionString="", normString="",
                     normCuts="", abstract=None, chan=None, sam=None):
        histName = "h%s%s%s%s_obs_%s" % (sam.name, self.name, highorlow, regionString, replaceSymbols(chan.variableName) )

        log.debug("       adding histo %s" % histName)
        try:
            abstract.prepare.addHisto(histName,
                                      useOverflow=chan.useOverflowBin,
                                      useUnderflow=chan.useUnderflowBin)
        except:
            pass


class TreeWeightSystematic(SystematicBase):

    def __init__(self, name="", nominal=None, high=None, low=None,
                 type="", method="", constraint="Gaussian"):
        SystematicBase.__init__(self, name, nominal, high, low,
                                type, method, constraint)

    def PrepareWAHforWeight(self, regionString="", normString="", normCuts="",
                            abstract=None, topLvl=None, chan=None, sam=None):
        
        log.debug("PrepareWAHforWeight()")
        highandlow = ["High_", "Low_"] # ,"Nom_"]
        if self.differentNominalTreeWeight:
            highandlow = ["High_", "Low_", "Nom_"]

        for highorlow in highandlow:
            abstract.prepare.weights = str(abstract.lumiUnits*abstract.outputLumi/abstract.inputLumi)
            if highorlow == "High_":
                mywList = [ " * %s " % myw for myw in self.high]
                abstract.prepare.weights += "".join(mywList)
            elif highorlow == "Low_":
                mywList = [ " * %s " % myw for myw in self.low]
                abstract.prepare.weights += "".join(mywList)
            elif highorlow == "Nom_":
                mywList = [ " * %s " % myw for myw in self.nominal]
                abstract.prepare.weights += "".join(mywList)

            if abstract.readFromTree or abstract.useCacheToTreeFallback:
                treeName = sam.treeName
                if treeName == '':
                    if sam.prefixTreeName == '':
                        treeName = "%s%s" % (sam.name, abstract.nomName)
                    else:
                        treeName = "%s%s" % (sam.prefixTreeName, abstract.nomName)
                log.debug("PrepareWAHforWeight(): calling prepare.read()")
                abstract.prepare.read(treeName, sam.files)
            
            TreeWeightSystematic.tryAddHistos(self, highorlow, regionString,
                                              normString, normCuts, abstract,
                                              chan, sam)
            
            TreeWeightSystematic.FillUpDownHist(self, highorlow, regionString,
                                                normString, normCuts, abstract,
                                                topLvl, chan, sam)
        return

    def PrepareWAHforTree(self, regionString="", normString="", normCuts="",
                          abstract=None, topLvl=None, chan=None, sam=None):
        highandlow = ["High_", "Low_"]
        if self.differentNominalTreeWeight:
            highandlow = ["High_", "Low_", "Nom_"]

        log.debug("PrepareWAHforTree() for {}".format(self.name))

        weightstemp = abstract.prepare.weights
        for highorlow in highandlow:
            abstract.prepare.weights = weightstemp
            for myw in sam.weights:
                if not myw in abstract.prepare.weights:
                    abstract.prepare.weights += " * " + myw

            if abstract.readFromTree or abstract.useCacheToTreeFallback:
                log.debug("PrepareWAHforTree(): will read syst {} from trees (or fallback enabled)".format(self.name))
                if highorlow == "High_":
                    log.verbose("PrepareWAHforTree(): in high mode")
                    if sam.name in self.filesHi:
                        filelist = self.filesHi[sam.name]
                    else:
                        filelist = sam.files

                    if sam.name in self.treeHiName:
                        treeName = self.treeHiName[sam.name]
                    else:
                        treeName = sam.treeName + self.high
                    
                    if treeName == '' or treeName == self.high:
                        if sam.prefixTreeName == '':
                            treeName = sam.name + self.high
                        else:
                            treeName = sam.prefixTreeName + self.high

                elif highorlow == "Low_":
                    log.verbose("PrepareWAHforTree(): in low mode")
                    if sam.name in self.filesLo:
                        filelist = self.filesLo[sam.name]
                    else:
                        filelist = sam.files
                    
                    if sam.name in self.treeLoName:
                        treeName = self.treeLoName[sam.name]
                    else:
                        treeName = sam.treeName + self.low
                    
                    if treeName == '' or treeName == self.low:
                        if sam.prefixTreeName == '':
                            treeName = sam.name + self.low
                        else:
                            treeName = sam.prefixTreeName + self.low
                
                elif highorlow == "Nom_":
                    log.verbose("PrepareWAHforTree(): in nominal mode")
                    filelist = sam.files
                    treeName = sam.treeName + self.nominal
                    if treeName == '' or treeName == self.nominal:
                        if sam.prefixTreeName == '':
                            treeName = sam.name + self.nominal
                        else:
                            treeName = sam.prefixTreeName + self.nominal
                    
                log.debug("PrepareWAHforTree(): calling prepare.read() for {} (sample {})".format(self.name, sam.name))
                log.verbose("PrepareWAHforTree(): tree name = '{}'".format(treeName))
                log.verbose("PrepareWAHforTree(): file list = {}".format(filelist))
                abstract.prepare.read(treeName, filelist, friendTreeName=sam.friendTreeName)

            TreeWeightSystematic.tryAddHistos(self, highorlow, regionString,
                                              normString, normCuts, abstract,
                                              chan, sam)
            TreeWeightSystematic.FillUpDownHist(self, highorlow, regionString,
                                                normString, normCuts, abstract,
                                                topLvl, chan, sam)
            abstract.prepare.weights = weightstemp
        return

    def PrepareWeightsAndHistos(self, regionString="", normString="",
                                normCuts="", abstract=None,
                                topLvl=None, chan=None, sam=None):

        log.verbose("PrepareWeightsAndHistos()")
        if self.type == "weight":
            log.verbose("Calling TreeWeightSystematic.PrepareWAHforWeight()") 
            TreeWeightSystematic.PrepareWAHforWeight(self, regionString,
                                                     normString, normCuts,
                                                     abstract, topLvl, chan, sam)
        if self.type == "tree":
            log.verbose("Calling TreeWeightSystematic.PrepareWAHforTree()") 
            TreeWeightSystematic.PrepareWAHforTree(self, regionString,
                                                   normString, normCuts,
                                                   abstract, topLvl, chan, sam)
        return


class UserSystematic(SystematicBase):
    def __init__(self, name="", nominal=None, high=None, low=None, type="",
                 method="", constraint="Gaussian"):
        SystematicBase.__init__(self, name, nominal, high, low, type,
                                method, constraint)

    def PrepareWeightsAndHistos(self, regionString="", normString="",
                                normCuts="", abstract=None,
                                topLvl=None, chan=None, sam=None):

        nomName = "h%sNom_%s_obs_%s" % (sam.name, regionString, replaceSymbols(chan.variableName) )
        
        for lowhigh in ["High_","Low_"]:
            lowhighName = "h%s%s%s%s_obs_%s" % (sam.name, self.name, lowhigh, regionString, replaceSymbols(chan.variableName))
            if abstract.hists[lowhighName] is None:
                if lowhigh == "High_":
                    abstract.hists[lowhighName] = histMgr.buildUserHistoSysFromHist(lowhighName, self.high, abstract.hists[nomName])
                elif lowhigh == "Low_":
                    abstract.hists[lowhighName] = histMgr.buildUserHistoSysFromHist(lowhighName, self.low, abstract.hists[nomName])
        return

    def PrepareGlobalNormalization(self,normString,abstract,topLvl,chan,sam):

        for lowhigh in ["Nom_",self.name+"High_",self.name+"Low_"]:
            histName = "h%s%s%sNorm" % (sam.name, lowhigh, normString)
            if not histName in abstract.hists.keys():
                if sam.normRegions:
                    
                    if not abstract.readFromTree:
                        abstract.hists[histName] = None
                        abstract.prepare.addHisto(histName)
                    else:
                        abstract.hists[histName] = TH1F(histName, histName, 1, 0.5, 1.5)
                        totNorm=0.0
                        for normReg in sam.normRegions:
                            nameTmp = "h" + sam.name + lowhigh + normReg[0] + "_obs_" + replaceSymbols(chan.variableName)
                            try:
                                totNorm += abstract.hists[nameTmp].GetSumOfWeights()
                            except:
                                log.warning("could get histogram %s for normalization" % nameTmp)
                        
                        abstract.hists[histName].SetBinContent(1,totNorm)
        return


## This is the control function. The function ensures the backward compability.
## It returns an object
def Systematic(name="", nominal=None, high=None, low=None,
               type="", method="", constraint="Gaussian"):
    if type == "weight" or type == "tree" or type == "user":
        if type == "weight" or type == "tree":
            return TreeWeightSystematic(name, nominal, high, low,
                                        type, method, constraint)
        else:
            return UserSystematic(name, nominal, high, low,
                                        type, method, constraint)
    else:
        raise Exception("type unknown")
