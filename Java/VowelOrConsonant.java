import java.util.Scanner;

public class VowelOrConsonant {
    public static void main(String[] args) {
        // Create Scanner object
        Scanner scanner = new Scanner(System.in);

        // Prompt the user
        System.out.print("Enter a single alphabet character: ");
        char ch = scanner.next().toLowerCase().charAt(0); // Convert to lowercase

        // Check if input is an alphabet letter
        if ((ch >= 'a' && ch <= 'z')) {
            // Check for vowels
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                System.out.println("It is a Vowel.");
            } else {
                System.out.println("It is a Consonant.");
            }
        } else {
            System.out.println("Invalid input! Please enter an alphabet letter.");
        }

        // Close the scanner
        scanner.close();
    }
}
