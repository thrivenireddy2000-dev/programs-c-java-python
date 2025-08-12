import java.util.*;
class signcheck {
    public static void main(String[] args) {
        // Declare variable
        int a;

        // Create Scanner object
        Scanner s = new Scanner(System.in);

        // Prompt user to enter a number
        System.out.print("Enter a number: ");
        a = s.nextInt();

        // Check condition
        if (a == 0)
            System.out.println("Given value is equal to zero");
        else if (a > 0)
            System.out.println("Given value is positive");
        else
            System.out.println("Given value is negative");

        // Close scanner
        s.close();
    }
}
