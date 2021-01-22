#!/bin/sh
src_dir=$PWD/src
dirs=$(ls $src_dir)
for dir in ${dirs[@]}; do
    cd $src_dir/${dir} && make run
done
