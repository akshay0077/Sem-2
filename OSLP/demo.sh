num1=$1
num2=$2

echo "Number 1 is : $num1"
echo "Number 2 is : $num2"

echo "-------------"

add=`expr $num1 + $num2`
echo "$add"

sub=`expr $num1 - $num2`
echo "$sub"

mult=`expr $num1 \* $num2`
echo "$mult"

div=`expr $num1 / $num2`
echo "$div"