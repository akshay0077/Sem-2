class Sixth{
	public static void main(String args[]){
		int num= Integer.parseInt(args[0]);
		int ans=0;
		int n=(num/2);

		if(num>0){
			for(int i=2;i<=n;i++){
				if(num%i==0){
					ans=1;
				}
			}
			if(ans==1){
				System.out.println(num+" is A Not Prime number");
			}
			else{
				System.out.println(num+" is A Prime number");
			}
		}
		else
			System.out.println("Number should be greater than 0");
	}
}