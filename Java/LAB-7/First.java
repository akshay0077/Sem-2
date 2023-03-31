public class First{
	public static void main(String[] args) {
		try {
	    	int a = 5;
	    	int b = 0;
	    	int c = a/b; // This line will throw a DivideByZeroException

		}catch (ArithmeticException e) {
	    	System.out.println("Caught ArithmeticException: " + e.getMessage());
		}finally {
	    	System.out.println("This code will always execute, regardless of whether an exception occurred or not.");
		}
	}
}