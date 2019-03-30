#!/bin/bash
#author:csf
#url:www.shaofeichang.github.com


echo "shell parameter"
echo "File name $0"
echo "Param1 $1"
echo "Param1 $2"
echo "Param1 $3"
echo "$#"
echo "$*"
echo "$@"
echo "$-"
echo "$?"

echo "-- \$* 演示 ---"
for i in "$*"; do
    echo $i
done

echo "-- \$@ 演示 ---"
for i in "$@"; do
    echo $i
done
