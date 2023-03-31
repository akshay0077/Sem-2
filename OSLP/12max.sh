#!/bin/bash

max=$1

for i in "$@"
do
  if [ $i -gt $max ]
  then
    max=$i
  fi
done

echo "The maximum number is: $max"
