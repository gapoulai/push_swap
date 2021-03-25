#!/bin/bash
color()(set -o pipefail;"$@" 2>&1>&3|sed $'s,.*,\e[31m&\e[m,'>&2)3>&1
clear 

make

ARG=`ruby -e "puts (1..3).to_a.shuffle.join(' ')"`
# echo "test with $ARG"

printf "\-\-\-\-\RUN/-/-/-/-/\n"

# color ./checker 1 3 2
# color ./checker $ARG
color ./push_swap $ARGS
printf "/-/-/-/-/END\-\-\-\-\n"