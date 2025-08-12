#include <stdio.h>

int main() {
    int n = 345;
    int ld = 0;
    int rev = 0;

    while(n > 0) {
        ld = n % 10;           // Get last digit
        rev = (rev * 10) + ld; // Build reverse number
        n = n / 10;            // Remove last digit
    }

    printf("Reverse of given number is: %d\n", rev); // Print after loop
    return 0;
}
