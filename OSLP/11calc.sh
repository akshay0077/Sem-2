#!/bin/bash

product=10

for i in "$@"
do
  product=$((product * i))
done

echo "The product of all the numbers is: $product"
