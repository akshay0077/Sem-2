import java.util.*;

class Circle
{
	double r,area;

	Circle(double r){
		this.r=r;
	}

	void area(){
		area=(3.14*r*r);
		System.out.println("Area of Circle= " +area);
	}
}

class Triangle
{
	int b,h;
	double area;

	Triangle(int b,int h){
		this.b=b;
		this.h=h;
	}
	void area(){
		area=(b*h)/2;
		System.out.println("Area of Triangle= " +area);
	}
}

class Rectanglee
{
	int w,h;
	double area;

	Rectanglee(int w,int h){
		this.w=w;
		this.h=h;
	}
	void area(){
		area=w*h;
		System.out.println("Area of rectangle=" +area);
	}
}

class Lab3_2{
	public static void main(String ar[])
	{
		int ch;
		Scanner sc=new Scanner(System.in);
		System.out.println("Press 1.For Calculating Ares Of Circle");
		System.out.println("Press 2.For Calculating Ares Of Triangle");
		System.out.println("Press 3.For Calculating Ares Of Rectangle");
		System.out.print("Enter Choice= ");
		ch=sc.nextInt();

		switch(ch){
			case 1:
				System.out.print("\nEnter Radius= ");
				double rd=sc.nextDouble();
				Circle c1=new Circle(rd);
				c1.area();
				break;

			case 2:
				System.out.print("\nEnter Base and Height= ");
				int base=sc.nextInt();
				int hgt=sc.nextInt();
				Triangle t1=new Triangle(base,hgt);
				t1.area();
				break;

			case 3:
			System.out.print("\nEnter Width and Height=");
			int width=sc.nextInt();
			int height=sc.nextInt();
			Rectanglee re1=new Rectanglee(width,height);
			re1.area();
			break;
		
		default:
			break;
		}
	}
}