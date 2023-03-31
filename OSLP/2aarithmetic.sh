a=$1
b=$2

echo "Number 1 = $a"
echo "Number 2 = $b"

echo "--------------------"
c=`expr $a + $b`
echo "Addition is = $c"

c=`expr $a - $b`
echo "Substraction is = $c"

c=`expr $a \* $b`
echo "Multiplication is = $c"

c=`expr $a / $b`
echo "Division is = $c"