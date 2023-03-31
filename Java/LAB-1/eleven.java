class eleven
{
	public static void main(String args[])
	{
		int base=Integer.parseInt(args[0]);
		int powe=Integer.parseInt(args[1]);
		int ans=1;

		for(int i=power; i>0; i--){
			ans=(ans*base);
		}
		System.out.println(base+"^"+power+"="+ans);
	}
}