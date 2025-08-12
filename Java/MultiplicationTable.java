import java.util.Scanner;

public class MultiplicationTable {
    public static void main(String[] args) {
        // Scanner to take input
        Scanner sc = new Scanner(System.in);

        // Ask user to enter a number
        System.out.print("Enter a number to print its multiplication table: ");
        int n = sc.nextInt();

        // Print multiplication table
        for (int i = 1; i <= 10; i++) {
            System.out.println(n + " * " + i + " = " + (n * i));
        }

        sc.close(); // Always close the scanner
    }
}
