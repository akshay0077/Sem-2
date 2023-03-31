class Seven
{
	public static void main(String args[]){
		int num= Integer.parseInt(args[0]);
		int ans=1;

	if(num>0){
		for(int i=1;i<=num;i++){
			ans=ans*i;
		}
		System.out.println("Factorial of "+args[0]+"="+ans);
	}
	else
		System.out.printf("Number should be greater than zero");
	}
}