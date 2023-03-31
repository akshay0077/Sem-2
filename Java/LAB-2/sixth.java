public class sixth {
  private double radius;
  private double area;
  private double diameter;

  public void setRadius(double radius) {
    this.radius = radius;
  }

  public double getRadius() {
    return radius;
  }

  public double computeDiameter() {
    diameter = 2 * radius;
    return diameter;
  }

  public double computeArea() {
    area = Math.PI * radius * radius;
    return area;
  }
}


public class TestCircle {
  public static void main(String[] args) {
    Circle c1 = new Circle();
    c1.setRadius(2.0);
    System.out.println("Radius of Circle 1: " + c1.getRadius());
    System.out.println("Diameter of Circle 1: " + c1.computeDiameter());
    System.out.println("Area of Circle 1: " + c1.computeArea());

    Circle c2 = new Circle();
    c2.setRadius(3.0);
    System.out.println("\nRadius of Circle 2: " + c2.getRadius());
    System.out.println("Diameter of Circle 2: " + c2.computeDiameter());
    System.out.println("Area of Circle 2: " + c2.computeArea());

    Circle c3 = new Circle();
    c3.setRadius(4.0);
    System.out.println("\nRadius of Circle 3: " + c3.getRadius());
    System.out.println("Diameter of Circle 3: " + c3.computeDiameter());
    System.out.println("Area of Circle 3: " + c3.computeArea());
  }
}
