import java.util.*;

class ArithmeticIntOp
{
    int result;

    ArithmeticIntOp(){
        result=0;
    }

    int getArithmeticIntOpResult(){
        return result;
    }

    void calculate(int a, int b, char op){
        if(op == '+'){
         result=a+b;
        }
        else if(op == '-'){
         result=a-b;
        }
        else if(op == '*'){
            result=a*b;
        }
        else if(op=='/'){
            result=a/b;
        }
    }   
}

class RelationalOp
{
    boolean result;

    RelationalOp(){
        result=false;
    }

    int getRelationalOpResult(){
    if(result==true){
        return 1;
    }
    else{
        return 0;
    }
}

    void calculate(int a, int b, String op)
    {
        if(op == "=="){
             if(a==b){
                result=true;
            }
        }
        else if(op == "!="){
             if(a!=b){
                result=true;
            }
        }
        else if(op == ">="){
            if(a>=b){
                result=true;
            }
        }

        else if(op == ">"){
            if(a>b){
                result=true;
            }
        }
        else if(op == "<"){
            if(a<b)
            {
            result=true;
            }
        }
        else if(op == "<="){
            if(a<=b){
                result=true;
            }
        }
        else{
            result=false;
        }
    }
}

class BitwiseOp
{
    int result;
    BitwiseOp(){
        result=0;
    }

    int getBitwiseOpResult(){
        return result;
    }

    void calculate(int a, int b, String op){
        if(op.equals("&"))
            result=(a&b);
        if(op.equals("|"))
            result=(a|b);
        if(op.equals("^"))
            result=(a^b);
        if(op.equals("~")){
            System.out.println("Only first a=" + a + " Result Display");
            result=(~a);
        }
        if(op.equals("<<"))
            result=(a<<b);
        if(op.equals(">>"))
            result=(a>>b);
        if(op.equals(">>>"))
            result=(a>>>b);
        }
    }

public class Lab3_1
{
    public static void main(String args[])
    {
        int a,b;
        char op1;
        String op2,op3;

        Scanner sc=new Scanner(System.in);
        System.out.println("Enter Value Of A");
        a=sc.nextInt();

        System.out.println("Enter Value Of A");
        b=sc.nextInt();

        do
        {
            System.out.println("Press 1.For Arithmatic Operators(+,-,/,*)");
            System.out.println("Press 2.For RelationalOperators(==,!=,>=,<=,>,<)");
            System.out.println("Press 3.For BitwiseOperation(&,|,^,~,<<,>>,>>>)");
            System.out.println("Enter Your Choice");
            int choice=sc.nextInt();
        
        if(choice==1){
            System.out.println("Enter Operator[Must Only =,-,/,*");
            op1=sc.next().charAt(0);

            ArithmeticIntOp a1=new ArithmeticIntOp();
            a1.calculate(a,b,op1);

            int res=a1.getArithmeticIntOpResult();
            System.out.println("Result="+res);
            break;
        }

        if(choice==2)
        {
            System.out.println("Enter Operator[Must Only==,!=,<,>,<=,>=");
            op2=sc.next();
            RelationalOp r1=new RelationalOp();

            r1.calculate(a,b,op2);
            int t1=r1.getRelationalOpResult();
            System.out.println("Result="+t1);
            break;
        }

        if(choice==3){
            System.out.println("Enter Operator[Must Only&,|,^,~,<<,>>,>>>");
            op3=sc.next();
            BitwiseOp b1=new BitwiseOp();

            b1.calculate(a,b,op3);
            int bt1=b1.getBitwiseOpResult();
            System.out.println("Result="+bt1);
            break;
        }
    }while(true);
    }
}