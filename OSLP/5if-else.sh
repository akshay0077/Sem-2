

if [ $# -lt 2 ]
then
    echo "Enter two number"
    read x
    read y
else
 x=$1
 y=$2
fi

if [ $x -gt $y ]
then
    echo "$x is greater value"
elif [ $y -gt $x ]
then
    echo "$y is greater value"
else
 echo "both are same"
fi