class RecursiveFactorial {
    // Recursive method
    static int fact(int n) {
        System.out.println("It is calculating " + n + " * fact(" + n + " - 1)");
        if (n > 1)
            return n * fact(n - 1);
        else if (n == 1)
            return 1;
        else
            return 0; // for negative numbers
    }

    public static void main(String[] args) {
        int n = 5;
        int res = fact(n);
        System.out.println("Factorial is: " + res);
    }
}
