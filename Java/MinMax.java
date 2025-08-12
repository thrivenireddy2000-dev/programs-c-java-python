class MaxMin {
    // method to find max
    static void max(int a, int b) {
        if (a > b) {
            System.out.println("max is " + a);
        } else {
            System.out.println("max is " + b);
        }
    }

    // method to find min
    static void min(int a, int b) {
        if (a < b) {
            System.out.println("min is " + a);
        } else {
            System.out.println("min is " + b);
        }
    }

    public static void main(String[] args) {
        int a = 15;
        int b = 34;

        max(a, b);
        min(a, b);
    }
}
