class Fifth{
	public static void main(String args[]){
		int year= Integer.parseInt(args[0]);

		if(((year%4==0) && (year%100!=0)) || year%400==0){
			System.out.println(year+" is Leap year");
		}
		else{
			System.out.printf(year+" is not a Leap year");
		}
	}
}