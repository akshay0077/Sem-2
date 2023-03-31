#!/bin/bash

echo "Enter a number N:"
read N

total=0

for i in $(seq 1 $N)
do
  total=$((total + i))
done

echo "The total of the first $N positive integers is: $total"
