import java.util.Scanner;

public class primeornot
 {
    public static void main(String[] args) {
        int n, i, flag = 0;

        // Create Scanner object for input
        Scanner scanner = new Scanner(System.in);

        // Ask user to enter a number
        System.out.print("Enter a number: ");
        n = scanner.nextInt();

        // Close the scanner
        scanner.close();

        // Check if number is less than or equal to 1
        if (n <= 1) {
            System.out.println("Not a prime number");
            return;
        }

        // Check divisibility from 2 to n/2
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                flag = 1; // Not prime
                break;
            }
        }

        if (flag == 0) {
            System.out.println("It is a prime number");
        } else {
            System.out.println("Not a prime number");
        }
    }
}
