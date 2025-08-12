import java.util.Scanner;

public class DivisibilityCheck {
    public static void main(String[] args) {
        // Create Scanner object to read input
        Scanner scanner = new Scanner(System.in);

        // Prompt the user
        System.out.print("Enter a number: ");
        int number = scanner.nextInt();

        // Check divisibility
        if (number % 3 == 0 && number % 11 == 0) {
            System.out.println("The number is divisible by both 3 and 11.");
        } else if (number % 3 == 0) {
            System.out.println("The number is divisible by 3 only.");
        } else if (number % 11 == 0) {
            System.out.println("The number is divisible by 11 only.");
        } else {
            System.out.println("The number is not divisible by 3 or 11.");
        }

        // Close the scanner
        scanner.close();
    }
}
