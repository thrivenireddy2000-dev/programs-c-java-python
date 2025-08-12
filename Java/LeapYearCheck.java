import java.util.Scanner;

public class LeapYearCheck {
    public static void main(String[] args) {
        // Create Scanner object
        Scanner scanner = new Scanner(System.in);

        // Prompt the user
        System.out.print("Enter a year: ");
        int year = scanner.nextInt();

        // Leap year logic:
        // A year is a leap year if it is divisible by 4
        // but not divisible by 100 unless it is also divisible by 400
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            System.out.println(year + " is a Leap Year.");
        } else {
            System.out.println(year + " is NOT a Leap Year.");
        }

        // Close scanner
        scanner.close();
    }
}
