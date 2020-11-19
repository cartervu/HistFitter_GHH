channel_label=$1
type=$2
m=$3
variable=""

label=${type}${channel_label}


# Bkg only fit from trees
HistFitter.py -t -w -f -D "before,after" -i analysis/tutorial/MyConfigExample.py
