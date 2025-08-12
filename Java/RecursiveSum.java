class RecursiveSum {
    // Recursive method
    static int sum(int n) {
        if (n == 1)
            return 1;
        else
            return n + sum(n - 1);
    }

    public static void main(String[] args) {
        int p = 10;
        int res = sum(p);
        System.out.println("Sum of first " + p + " numbers is: " + res);
    }
}
