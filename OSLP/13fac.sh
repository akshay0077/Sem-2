#!/bin/bash

echo "Enter a number N:"
read N

if [ $N -lt 0 ]
then
  echo "Error: Please enter a positive number."
  exit 1
elif [ $N -eq 0 ]
then
  echo "The factorial of 0 is 1."
  exit 0
fi

factorial=1

for i in $(seq 1 $N)
do
  factorial=$((factorial * i))
done

echo "The factorial of $N is $factorial."
