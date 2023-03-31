class Night
{
	public static void main(String args[])
	{
		int no1=Integer.parseInt(args[0]);
		int no2=Integer.parseInt(args[1]);
		
		int n=0,ans=0;

		if(no1>no2){
			n=no1;
		}
		else{
			n=no2;
		}
		for(int i=n;i>0;i--){
			if((no1%i==0)&&(no2%i==0)){
				ans=i;
				break;
			}
		}
		System.out.println("GCD of "+no1+" and "+no2+"= "+ans);
	}
}