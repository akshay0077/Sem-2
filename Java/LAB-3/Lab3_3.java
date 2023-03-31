class Lab3_3
{
	public static void main(String args[])
	{
		String str=new String();
		char ch[]={'h','e','l','l','o','d','d','u'};

		System.out.println("Empty string=" +str);
		str=new String("Helloo");

		System.out.println("string passed value of the character=" +str);
		str=new String(ch,4,2);

		System.out.println("String passed the substring (ch,4,2) " +str);
		System.out.println("String with value= " +str);

		str=new String(ch);
		String str2=str+"Students";

		System.out.println("String str2= "+str2);
		System.out.println("CharAt 3 in str2 = "+ str2.charAt(3));

		int cpa=str2.codePointAt(1);
		System.out.println(" code point return the e unicode value "+ cpa);

		int cpb=str2.codePointBefore(1);
		System.out.println("code point befoore it return the before character unicode= " +cpb);

		int cpc=str2.codePointCount(2,10);
		System.out.println("it return the specified range of string =" +cpc);
		
		int com=str2.compareTo("welcome");
		System.out.println("compare string"+com);
}
}