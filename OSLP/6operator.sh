echo "Enter the age between 21 to 60"
read age

if [ $age -lt 21 -o $age -gt 60 ]
then
    echo "age out of bound"

elif [ $age -ge 21 -a $age -le 30 ]
then
    echo "age is in range to 21 to 30"

elif [ $age -ge 31 -a $age -le 40 ]
then
    echo "age is in range 31 to 40 "

elif [ $age -ge 41 -a $age -le 50 ]
then
    echo "age is in range 41 to 50 "

else
 echo "age is in range 51 to 60"
 
fi