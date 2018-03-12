#!/usr/bin/env python

# multiplexContours.py #################
#
# A "multiplexer" to combine many contours (like for different SRs) using the expected CLs as the figure of merit
#
# By: Larry Lee - Mar 2018

import pickle
import ROOT
import math,sys,os,argparse
import itertools


ROOT.gROOT.SetBatch()


parser = argparse.ArgumentParser()
parser.add_argument('--inputFiles','-i', type=str, nargs='+', help='input json files', required=True)
parser.add_argument("--outputFile","-o", type = str, help="output ROOT file", default = "multiplexedContours.root")
parser.add_argument("--debug","-d",      help = "print extra debugging info", action="store_true", default=False)
parser.add_argument("--distanceThreshold", type=float, default = 1)

args = parser.parse_args()


## If I need to use scipy, please let me have scipy. I'll even help you out!
try:
	import matplotlib.pyplot as plt
	import numpy as np
	import scipy.interpolate
except:
	print ">>> You need scipy/matplotlib to run this. And you had to have run harvestToContours in scipy mode [default]"
	print ">>> In an ATLAS environment, you can..."
	print ">>> > localSetupSFT --cmtConfig=x86_64-slc6-gcc48-opt releases/LCG_79/pytools/1.9_python2.7,releases/LCG_79/pyanalysis/1.5_python2.7"
	print ">>> > lsetup root"
	print ">>> "
	print ">>> Do you want me to try to set it up for you (in ATLAS env)? (y/n)"
	choice = raw_input().lower()
	if choice[0] == "y":
		try:
			os.system("localSetupSFT --cmtConfig=x86_64-slc6-gcc48-opt releases/LCG_79/pytools/1.9_python2.7,releases/LCG_79/pyanalysis/1.5_python2.7")
			os.system("lsetup root")
			import matplotlib.pyplot as plt
			import numpy as np
			import scipy.interpolate
		except:
			print ">>> ... Setup didn't work for some reason!"
	else:
		print ">>> Quitting -- You don't have matplotlib/numpy setup and you requested mpl-based interpolation"
		sys.exit(1)

try:
	from shapely.ops import cascaded_union, polygonize
	from shapely.geometry import Polygon,MultiPolygon
	from shapely.geometry import LineString
except:
	print ">>> You need to have access to shapely!"
	print ">>> Do you want me to try and install it?"
	print ">>> (Just in your home directory. See source if you're worried about what I'm about to do!)"
	print ">>> (y/n)"
	choice = raw_input().lower()
	if choice[0] == "y":
		try:
			os.system(
				"""
					wget http://download.osgeo.org/geos/geos-3.6.1.tar.bz2
					tar xvf geos-3.6.1.tar.bz2
					cd geos-3.6.1/
					./configure --prefix=$HOME/.local
					make
					make install
					cd ..
					pip install -r shapely -I --no-cache-dir
				"""
				)
			print ">>> It's possible that worked. Try running again?"	
			sys.exit(1)
		except:
			print ">>> ... Setup didn't work for some reason!"
	else:
		print ">>> Quitting -- You don't have shapely installed and I really need it!"
		print ">>>     ... Like it seriously makes my life a lot easier!"
		sys.exit(1)





def main():

	print ">>> Launching multiplexContours.py "


	dict_TFiles = {}
	dict_Surfaces = {}
	dict_Exp = {}
	dict_Obs = {}

	dict_Exp_u1s = {}
	dict_Exp_d1s = {}

	dict_Obs_u1s = {}
	dict_Obs_d1s = {}


	isoExpectedContours = {}

	listOfInputFiles = [tmp.translate(None,", ") for tmp in args.inputFiles]

	print ">>> Grabbing input information from input files:"
	print ">>> >>> " + " ".join(listOfInputFiles)

	for inputFileName in listOfInputFiles:
		dict_TFiles[inputFileName] = ROOT.TFile(inputFileName)
		dict_Surfaces[inputFileName] = pickle.load( open( inputFileName+".expectedSurface.pkl", "rb" ) )

		dict_Exp[inputFileName] = dict_TFiles[inputFileName].Get("Exp_0").Clone(inputFileName+"_Exp_0")
		dict_Obs[inputFileName] = dict_TFiles[inputFileName].Get("Obs_0").Clone(inputFileName+"_Obs_0")

		dict_Exp_u1s[inputFileName] = dict_TFiles[inputFileName].Get("SubGraphs/clsu1s_Contour_0").Clone(inputFileName+"_Exp_u1s")
		dict_Exp_d1s[inputFileName] = dict_TFiles[inputFileName].Get("SubGraphs/clsd1s_Contour_0").Clone(inputFileName+"_Exp_d1s")

		dict_Obs_u1s[inputFileName] = dict_TFiles[inputFileName].Get("Obs_0_Up").Clone(inputFileName+"_Obs_u1s")
		dict_Obs_d1s[inputFileName] = dict_TFiles[inputFileName].Get("Obs_0_Down").Clone(inputFileName+"_Obs_d1s")

	print ">>> Creating output ROOT file: %s"%args.outputFile

	outputFile = ROOT.TFile(args.outputFile,"RECREATE")

	fig, ax = plt.subplots()

	print ">>> Creating iso expected contours for all pairwise combinations of SRs"

	for (region1, region2) in itertools.combinations(listOfInputFiles, 2):

		x,y = dict_Surfaces[region1]["x"], dict_Surfaces[region1]["y"]
		z1,z2 = dict_Surfaces[region1]["z"], dict_Surfaces[region2]["z"]
		cs = ax.contour(x,y,z1-z2, ":", levels=[0] )

		isoExpectedContours[(region1,region2)] = cs.allsegs[0]


	uncutRegions = {}


	for inputFileName in listOfInputFiles:
		region = {}

		region["Exp"]     = tGraphToPolygon(dict_Exp[inputFileName])
		region["Exp_u1s"] = tGraphToPolygon(dict_Exp_u1s[inputFileName])
		region["Exp_d1s"] = tGraphToPolygon(dict_Exp_d1s[inputFileName])
		region["Obs"]     = tGraphToPolygon(dict_Obs[inputFileName])
		region["Obs_u1s"] = tGraphToPolygon(dict_Obs_u1s[inputFileName])
		region["Obs_d1s"] = tGraphToPolygon(dict_Obs_d1s[inputFileName])

		uncutRegions[inputFileName] = region


	sumOfExpecteds = cascaded_union([v["Exp"] for k,v in uncutRegions.iteritems()])

	if args.debug:
		x,y = sumOfExpecteds.exterior.coords.xy
		convertArraysToTGraph(x,y).Write("debug_sumOfExpecteds")

	if args.debug:
		print ">>> Integral of the best expected contour: %d"%sumOfExpecteds.area


	allIsoExpectedContours = []
	allIsoExpectedContoursLineStrings = []
	for thing in isoExpectedContours:
		for otherThing in isoExpectedContours[thing]:
			allIsoExpectedContours.append( otherThing )
			allIsoExpectedContoursLineStrings.append( LineString(otherThing) )


	print ">>> Total number of isoExpectedContours: %d"%len(allIsoExpectedContoursLineStrings)

	for iIEC,IEC in enumerate(allIsoExpectedContours):
		convertArraysToTGraph(IEC[:,0],IEC[:,1]).Write("isoExpectedContour_%d"%iIEC)


	listOfBestCurves = {}

	for tmpKey in uncutRegions[inputFileName]:
		listOfBestCurves[tmpKey] = []

	print ">>> Cutting space up into regions based on iso expected contours"

	# # Cut up the union of exp regions into individual parts
	allIsoExpectedContoursLineStrings = sorted(allIsoExpectedContoursLineStrings, key=lambda x: x.length, reverse=True)

	subRegions = []
	tmpMultiPoly = sumOfExpecteds
	for cutLine in allIsoExpectedContoursLineStrings:
		tmpMultiPoly = tmpMultiPoly.difference(cutLine.buffer(1e-3))
	for poly in tmpMultiPoly:
		subRegions.append(poly)


	if args.debug:
		print ">>> Number of regions in this plane: %d"%len(subRegions)

	for iSubRegion,subRegion in enumerate(subRegions):
		if args.debug:
			print ">>> >>> Loop through sub regions: %d"%iSubRegion

		# this subRegion -- Figure out which SR it corresponds to

		biggestOverlap = 0
		bestSR = ""
		for regionName,region in uncutRegions.iteritems():
			tmpOverlap = len(set(subRegion.exterior.coords) & set(region["Exp"].exterior.coords))
			if tmpOverlap > biggestOverlap:
				biggestOverlap = tmpOverlap
				bestSR = regionName

		if bestSR=="":
			continue

		# now I know that this subRegion should go with bestSR

		# so now I need to loop over all other types of curves associated with best SR
		# and cut them up with all the IECs (e.g. obs, exp+1sig, etc)

		if args.debug:
			print ">>> >>> Identified the best SR in this region as %s"%bestSR

		for tmpKey,subCurve in uncutRegions[bestSR].iteritems():
			cutUpSubCurve = polygonize( cascaded_union( [subCurve.boundary]+allIsoExpectedContoursLineStrings  ))

			# now for this type of curve (e.g. obs, exp+1sig, etc), I've cut it up with the IECs into regions
			# and now I can compare each subcurve with the subRegion. If there's overlap,
			# then this is the relevant piece. I've done a terrible job at terminology here...

			for chunkOfSubCurve in cutUpSubCurve:
				if type(chunkOfSubCurve.intersection(subRegion) ) == Polygon:
					listOfBestCurves[tmpKey].append(chunkOfSubCurve)


	print ">>> Creating summed curves and writing to output file"

	summedCurves = {}
	for typeOfCurve in listOfBestCurves:
		summedCurves[typeOfCurve]	= cascaded_union(listOfBestCurves[typeOfCurve])

		if "Exp_u1s" == typeOfCurve or "Exp_d1s" == typeOfCurve:
			continue

		if type(summedCurves[typeOfCurve])==MultiPolygon:
			summedCurves[typeOfCurve] = max(summedCurves[typeOfCurve], key=lambda item: item.area)

		x,y =  summedCurves[typeOfCurve].exterior.coords.xy
		ax.plot(x,y,alpha=0.5)

		convertArraysToTGraph(x,y).Write("%s"%typeOfCurve)

	print ">>> Creating Exp +/-1 sigma band and writing to output file"

	if "Exp_u1s" in summedCurves and "Exp_d1s" in summedCurves:
		band = summedCurves["Exp_d1s"].difference(summedCurves["Exp_u1s"])

		if type(band)==MultiPolygon:
			band = max(band, key=lambda item: item.area)

		x,y = band.exterior.coords.xy
		ax.plot(x,y,alpha=0.9)

		convertArraysToTGraph(x,y).Write("ExpectedBand")

	if args.debug:
		print ">>> Saving debugging plot: debug.pdf"
		fig.savefig("debug.pdf")

	outputFile.Write()
	outputFile.Close()

	return


def tGraphToPolygon(myGraph, pinPoint=None):
	x,y = convertTGraphToArrays(myGraph)
	if pinPoint==None:
		x = np.append(x,[min(x)])
		y = np.append(y,[min(y)])
	return Polygon(zip(x,y))



def convertTGraphToArrays(mygraph):
	size = mygraph.GetN()
	x1buffer = mygraph.GetX()
	y1buffer = mygraph.GetY()

	x1 = np.array([ x1buffer[i]  for i in range(size) ])
	y1 = np.array([ y1buffer[i]  for i in range(size) ])

	return (x1,y1)

def convertArraysToTGraph(x,y):
	mygraph = ROOT.TGraph(len(x))
	for iPoint,(x,y) in enumerate(zip(x,y)):
		mygraph.SetPoint(iPoint,x,y)
	return mygraph



if __name__ == "__main__":
	main()




