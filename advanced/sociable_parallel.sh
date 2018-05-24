#!/bin/sh
for n in `seq -f "%.10g" 1 10000`; do
    nohup ./a.out ${n} >> 社交数の結果.txt &
    echo $n
done