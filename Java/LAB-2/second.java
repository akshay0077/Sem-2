import java.util.Scanner;

class second {
   static int M;
   static int[][] firstMatrix;
   static int[][] secondMatrix;
   static int[][] resultMatrix;

   public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      System.out.print("Enter the value of M: ");
      M = sc.nextInt();
      firstMatrix = new int[M][M];
      secondMatrix = new int[M][M];
      resultMatrix = new int[M][M];
      
      System.out.println("Enter the elements of first matrix:");
      for (int i = 0; i < M; i++) {
         for (int j = 0; j < M; j++) {
            firstMatrix[i][j] = sc.nextInt();
         }
      }
      
      System.out.println("Enter the elements of second matrix:");
      for (int i = 0; i < M; i++) {
         for (int j = 0; j < M; j++) {
            secondMatrix[i][j] = sc.nextInt();
         }
      }
      
      int choice;
      do {
         System.out.println("1. Add matrices");
         System.out.println("2. Subtract matrices");
         System.out.println("3. Multiply matrices");
         System.out.println("4. Exit");
         System.out.print("Enter your choice: ");
         choice = sc.nextInt();
         
         switch (choice) {
            case 1:
               addMatrices();
               break;
            case 2:
               subtractMatrices();
               break;
            case 3:
               multiplyMatrices();
               break;
            case 4:
               System.exit(0);
               break;
            default:
               System.out.println("Invalid choice");
               break;
         }
      } while (choice != 4);
      sc.close();
   }
   
   static void addMatrices() {
      for (int i = 0; i < M; i++) {
         for (int j = 0; j < M; j++) {
            resultMatrix[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
         }
      }
      System.out.println("Result matrix after addition:");
      displayMatrix();
   }
   
   static void subtractMatrices() {
      for (int i = 0; i < M; i++) {
         for (int j = 0; j < M; j++) {
            resultMatrix[i][j] = firstMatrix[i][j] - secondMatrix[i][j];
         }
      }
      System.out.println("Result matrix after subtraction:");
      displayMatrix();
   }
   
   static void multiplyMatrices() {
      for (int i = 0; i < M; i++) {
         for (int j = 0; j < M; j++) {
            resultMatrix[i][j] = firstMatrix[i][j] * secondMatrix[i][j];
         }
      }
      System.out.println("Result matrix after Multiplication:");
      displayMatrix();
    }

    static void displayMatrix(){
        for(int i=0; i<M; i++){
            for(int j=0; j<M; j++){
                System.out.print(resultMatrix[i][j]+ " ");
            }
            System.out.println();
        }
    }
}