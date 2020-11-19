#!/bin/bash
set -x


function submit()
{
	condor_submit $1
}


condor_tag="HF_Batch_"

mydir=$PWD
HF_PATH=/afs/cern.ch/user/c/cvu/HistFitterTutorial

channel=$1
ttype=$2
channel_label="$channel"
targets=(testtarget)


#input information about targets for each channel and ttype, set channel label based on the channel input

for target in "${targets[@]}"
do
	name=${channel}_${ttype}_${target}
	echo $name

	cd ${HF_PATH}/batch
	mkdir $name
	cd $name

	jobName=${condor_tag}${name}.sub
	echo $jobName

	scriptName=${condor_tag}${name}.sh
	echo $scriptName

	condorTemplate=${HF_PATH}/condorTEMPLATE.sub

	cp $condorTemplate $jobName

	scriptString=${HF_PATH}/batch/${name}/${scriptName}
	sed -i "s!@SCRIPT@!${scriptString}!g" ${jobName}

	condor_err=${HF_PATH}/batch/${name}/${condor_tag}${name}.err
	sed -i "s!@STDOUTERR@!${condor_err}!g" ${jobName}

	condor_out=${HF_PATH}/batch/${name}/${condor_tag}${name}.out
	sed -i "s!@STDOUT@!${condor_out}!g" ${jobName}

	condorLog=${HF_PATH}/batch/${name}/${condor_tag}${name}.log
	sed -i "s!@LOG@!${condorLog}!g" ${jobName}

	condor_queue="tomorrow"
	sed -i "s!@QUEUE@!${condor_queue}!g" ${jobName}



	cat > $scriptName << EOF



#!/bin/bash
set -x
ps -p $$
echo $PWD


export HOME='/afs/cern.ch/user/c/cvu'
cd $HOME
# source .bashrc

setupATLAS
lsetup git
cd $HF_PATH
git checkout v0.64.0
lsetup 'root 6.18.04-x86_64-centos7-gcc8-opt'
source setup.sh
cd src
make
cd $HF_PATH

export LD_LIBRARY_PATH="$LD_LIBRARY_PATH:${HF_PATH}/lib"

source run_HF.sh $channel_label $ttype $target

EOF

	chmod 755 $scriptName

	submit $jobName

done

cd $my_dir
