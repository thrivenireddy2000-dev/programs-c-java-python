class SeventhPrime {
    public static void main(String[] args) {
        int c = 0;

        for (int n = 2; n < 100; n++) {
            int p = 0;
            for (int i = 2; i < n; i++) {
                if (n % i == 0) {
                    p = 1;
                    break;
                }
            }
            if (p == 0) {
                c++;
                if (c == 7) {
                    System.out.print(n + " ");
                    break;
                }
            }
        }
    }
}
