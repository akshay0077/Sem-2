echo "Enter three Number to find minimum"
read num1
read num2
read num3

if [ $num1 -gt $num2 -a $num1 -gt $num3 ]
then
	echo "$num1 is maximum"

elif [ $num2 -gt $num1 -a $num2 -gt $num3 ]
then
	echo "$num2 is maximum"

elif [ $num3 -gt $num1 -a $num3 -gt $num2 ]
then
	echo "$num3 is maximum"

else
	echo "All are equal"
fi