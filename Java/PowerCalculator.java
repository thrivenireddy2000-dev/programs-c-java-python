class PowerCalculator {
    public static void main(String[] args) {
        int base = 2;
        int exponent = 5;
        int r = 1;

        for(int i = 1; i <= exponent; i++) {
            r = r * base;
        }

        System.out.println(base + " power of " + exponent + " is " + r);
    }
}
