class NoMatchException extends Exception {
    public NoMatchException(String message) {
        super(message);
    }
}

public class Third {
    public static void checkString(String str) throws NoMatchException {
        if (!str.equals("Object Oriented Programing with JAVA")) {
            throw new NoMatchException("String does not match expected value");
        }
    }

    public static void main(String[] args) {
        String str1 = "Object Oriented Programing with JAVA";
        String str2 = "Java programming";

        try {
            checkString(str1);
            System.out.println("String matched expected value");
        } catch (NoMatchException e) {
            System.out.println("Caught NoMatchException: " + e.getMessage());
        }

        try {
            checkString(str2);
            System.out.println("String matched expected value");
        } catch (NoMatchException e) {
            System.out.println("Caught NoMatchException: " + e.getMessage());
        }
    }
}
