class Factorialusingfunction {
    // Method to calculate factorial
    static int fact(int n) {
        int r = 1;
        for (int i = n; i >= 1; i--) {
            r = r * i;
        }
        return r;
    }

    public static void main(String[] args) {
        int a = 5;
        int res = fact(a);
        System.out.println("Factorial of given number " + a + " is " + res);
    }
}
