class Eight
{
	public static void main(String args[])
	{
		int no=Integer.parseInt(args[0]);
		int n1=0, n2=1, ans=0;
		System.out.print("Fibonacci Series: ");

	if(no>0){
		System.out.print(n1+" "+n2);

		for(int i=2; i<=no; i++){
			ans=n1+n2;
			n1=n2;
			n2=ans;
		System.out.print(" "+ans);
		}
			System.out.println();

	}
}
}