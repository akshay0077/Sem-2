#!/bin/bash

echo "Select an option:"
echo "1) Addition"
echo "2) Subtraction"
echo "3) Multiplication"
echo "4) Division"
echo "5) Exit"

read choice

while [ $choice != 5 ]
do
  if [ $choice == 1 ]
  then
    echo "Enter two numbers:"
    read num1 num2
    result=$((num1 + num2))
    echo "The result is: $result"
  elif [ $choice == 2 ]
  then
    echo "Enter two numbers:"
    read num1 num2
    result=$((num1 - num2))
    echo "The result is: $result"
  elif [ $choice == 3 ]
  then
    echo "Enter two numbers:"
    read num1 num2
    result=$((num1 * num2))
    echo "The result is: $result"
  elif [ $choice == 4 ]
  then
    echo "Enter two numbers:"
    read num1 num2
    result=$((num1 / num2))
    echo "The result is: $result"
  else
    echo "Invalid choice. Try again."
  fi

  echo "Select an option:"
  echo "1) Addition"
  echo "2) Subtraction"
  echo "3) Multiplication"
  echo "4) Division"
  echo "5) Exit"

  read choice
done
