class Ten
{
	public static void main(String args[]){
		int n1=Integer.parseInt(args[0]);
		int n2=Integer.parseInt(args[1]);
		int n=0,ans=0;

		if(n1>n2){
			n=n1;
		}
		else{
			n=n2;
		}

		while(1){
			if((n%n1==0)&&(n%n2==0)){
				break;
			}
		n++;
		}
		System.out.println("LCM of "+n1+" and "+n2+"= "+n);
	}
}