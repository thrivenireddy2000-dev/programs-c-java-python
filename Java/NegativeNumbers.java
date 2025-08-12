import java.util.Scanner;

class NegativeNumbers {
    public static void main(String[] args) {
        int[] marks = new int[6];
        Scanner sc = new Scanner(System.in);

        // Input values into array
        System.out.println("Enter 6 numbers:");
        for (int i = 0; i < 6; i++) {
            marks[i] = sc.nextInt();
        }

        // Print only negative numbers
        System.out.println("Negative numbers are:");
        for (int i = 0; i < 6; i++) {
            if (marks[i] < 0) {
                System.out.println(marks[i]);
            }
        }

        sc.close();
    }
}
