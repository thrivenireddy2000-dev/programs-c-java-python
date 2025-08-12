class PrimeNumbers {
    public static void main(String[] args) {
        int n, i, p;

        for (n = 2; n < 100; n++) {
            p = 0; // reset for each number

            // check if n is prime
            for (i = 2; i < n; i++) {
                if (n % i == 0) {
                    p = 1; // not prime
                    break; // stop checking
                }
            }

            if (p == 0) {
                System.out.print(n + " ");
            }
        }
    }
}
