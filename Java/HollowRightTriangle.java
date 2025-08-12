class HollowRightTriangle {
    public static void main(String[] args) {
        for (int i = 1; i <= 5; i++) {
            // spaces before stars
            for (int j = 1; j <= 5 - i; j++) {
                System.out.print("  ");
            }

            // stars
            for (int j = 1; j <= i; j++) {
                if (i == 5 || j == 1 || j == i)
                    System.out.print(" * ");
                else
                    System.out.print("   ");
            }

            System.out.println();
        }
    }
}
