


#!/bin/bash
set -x
ps -p 23158
echo /afs/cern.ch/user/c/cvu/HistFitterTutorial/batch/channel2_test2_testtarget


export HOME='/afs/cern.ch/user/c/cvu'
cd /afs/cern.ch/user/c/cvu
# source .bashrc

setupATLAS
lsetup git
cd /afs/cern.ch/user/c/cvu/HistFitterTutorial
git checkout v0.64.0
lsetup 'root 6.18.04-x86_64-centos7-gcc8-opt'
source setup.sh
cd src
make
cd /afs/cern.ch/user/c/cvu/HistFitterTutorial

export LD_LIBRARY_PATH=":/afs/cern.ch/user/c/cvu/HistFitterTutorial/lib"

source run_HF.sh channel2 test2 testtarget

