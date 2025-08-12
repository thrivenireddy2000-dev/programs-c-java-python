class PalindromeCheck {
    public static void main(String[] args) {
        int n = 121;
        int num = n;
        int ld = 0;
        int rev = 0;

        while (n > 0) {
            ld = n % 10;
            rev = (rev * 10) + ld;
            n = n / 10;
        }

        if (num == rev)
            System.out.println("Yes, it is a palindrome");
        else
            System.out.println("Not a palindrome");
    }
}
