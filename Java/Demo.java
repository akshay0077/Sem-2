// package matrix;
 
import java.util.Scanner;
 
public class Demo {
 
    public static void main(String...args) {
           Scanner scanner = new Scanner(System.in);
           System.out.print("Enter number of rows in matrix : "); //rows and columns in matrix1 and matrix2 must be same for addition.
           int rows = scanner.nextInt();
           System.out.print("Enter number of columns in matrix : ");
           int columns = scanner.nextInt();
           int[][] matrix1 = new int[rows][columns];
           int[][] matrix2 = new int[rows][columns];
           
           System.out.println("Enter the elements in first matrix :");
           for (int i = 0; i < rows; i++) {
                  for (int j = 0; j < columns; j++) {
                        matrix1[i][j] = scanner.nextInt();
                  }
           }
           System.out.println("Enter the elements in second matrix :");
           for (int i = 0; i < rows; i++) {
                  for (int j = 0; j < columns; j++) {
                        matrix2[i][j] = scanner.nextInt();
                  }
           }
           
           //addition of matrices.
           int[][] resultMatix1 = new int[rows][columns];
           for (int i = 0; i < rows; i++) {
                  for (int j = 0; j < columns; j++) {
                        resultMatix1[i][j] = matrix1[i][j] + matrix2[i][j];
                  }
           }

           //Substraction of matrices.
           int[][] resultMatix2 = new int[rows][columns];
           for (int i = 0; i < rows; i++) {
                  for (int j = 0; j < columns; j++) {
                        resultMatix2[i][j] = matrix1[i][j] - matrix2[i][j];
                  }
           }
 
 		  //Multiplication of matrices.
           int[][] resultMatix3 = new int[rows][columns];
           for (int i = 0; i < rows; i++) {
                  for (int j = 0; j < columns; j++) {
                        resultMatix3[i][j] = matrix1[i][j] * matrix2[i][j];
                  }
           }

           System.out.println("\nFirst matrix is : ");
           for (int i = 0; i < rows; i++) {
                  for (int j = 0; j < columns; j++) {
                        System.out.print(matrix1[i][j] + " ");
                  }
                  System.out.println();
           }
 
           System.out.println("\nSecond matrix is : ");
           for (int i = 0; i < rows; i++) {
                  for (int j = 0; j < columns; j++) {
                        System.out.print(matrix2[i][j] + " ");
                  }
                  System.out.println();
           }
 
           System.out.println("\nThe sum of the two matrices is : ");
           for (int i = 0; i < rows; i++) {
                  for (int j = 0; j < columns; j++) {
                        System.out.print(resultMatix1[i][j] + " ");
                  }
                  System.out.println();
           }

           System.out.println("\nThe Substaction of the two matrices is : ");
           for (int i = 0; i < rows; i++) {
                  for (int j = 0; j < columns; j++) {
                        System.out.print(resultMatix2[i][j] + " ");
                  }
                  System.out.println();
           }

           System.out.println("\nThe Multiplication of the two matrices is : ");
           for (int i = 0; i < rows; i++) {
                  for (int j = 0; j < columns; j++) {
                        System.out.print(resultMatix3[i][j] + " ");
                  }
                  System.out.println();
           }
    }
}