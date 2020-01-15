# 2019-01-10 Alex Coleman
# C_for_starters ex7
# compile ex7.c with makefile

exfile=$1
make $exfile

chmod +x $exfile
# move compiled file into bin
mv $exfile bin/

# run compiled file and pass list of command line args
# to bin file
bin/$exfile $@
