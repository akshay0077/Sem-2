#!/bin/bash

echo "Enter a number N:"
read N

for i in $(seq $N -1 1)
do
  echo $i
done
