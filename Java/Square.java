import java.util.Scanner;

class SquareFunction {
    // function definition
    static int square(int p) {
        return p * p;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // read a number from user
        System.out.print("Enter a number: ");
        int a = sc.nextInt();

        // function call
        int r = square(a);
        System.out.println("Square is: " + r);

        sc.close();
    }
}
