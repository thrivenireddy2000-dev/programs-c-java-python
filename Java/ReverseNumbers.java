import java.util.Scanner;

public class ReverseNumbers {
    public static void main(String[] args) {
        // Create Scanner object to take input from user
        Scanner sc = new Scanner(System.in);

        // Ask user to enter the value of n
        System.out.print("Enter a number (n): ");
        int n = sc.nextInt();

        // Print numbers from n to 1
        for(int i = n; i >= 1; i--) {
            System.out.println(i);
        }

        sc.close(); // Close scanner
    }
}
