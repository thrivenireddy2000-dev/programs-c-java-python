class EvenCheck {
    // function definition
    static void evenCheck(int a) {
        if (a % 2 == 0) {
            System.out.println("even");
        } else {
            System.out.println("odd");
        }
    }

    public static void main(String[] args) {
        int p = 10;
        evenCheck(p); // function call
    }
}
