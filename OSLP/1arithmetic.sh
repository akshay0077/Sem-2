echo "Basic Calculater is here : "
echo "Enter the First value here : "
read num1

echo "Enter the Second value her : "
read num2

add="Total is : `expr $num1 + $num2`"
sub="Total is : `expr $num1 - $num2`"
mult="Total is : `expr $num1 \* $num2`"
div="Total is : `expr $num1 / $num2`"

echo "$add\n"
echo "$sub\n"
echo "$mult\n"
echo "$div\n"