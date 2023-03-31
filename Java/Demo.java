//reflaction example
import java.lang.reflect.Field;

class Person {
    private String name;
    
    public Person(String name) {
        this.name = name;
    }
}


public class Demo {
    public static void main(String[] args) throws Exception {
        Person person = new Person("John");
        
        // Get the "name" field using Reflection
        Field field = Person.class.getDeclaredField("name");
        
        // Set the field to a new value
        field.setAccessible(true); // make the field accessible
        field.set(person, "Jane"); // set the new value
        
        // Print the updated value
        System.out.println(person.name); // Output: Jane
    }
}

