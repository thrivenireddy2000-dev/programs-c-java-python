import java.util.Scanner;

public class factors {
    public static void main(String[] args) {
        int i;
        int n;

        // Create Scanner object to read input
        Scanner sc = new Scanner(System.in);

        // Read n value
        System.out.print("Enter a number: ");
        n = sc.nextInt();

        // Loop to find factors
        for(i = 1; i <= n; i++) {
            if(n % i == 0) {
                System.out.println(i);
            }
        }

        sc.close();
    }
}
