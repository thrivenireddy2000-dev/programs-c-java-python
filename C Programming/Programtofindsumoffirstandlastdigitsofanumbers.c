#include <stdio.h>

int main() {
    int n = 345;
    int fd = 0;
    int ld = 0;
    int sum = 0;
    int temp = n;  // Copy of n to use for finding first digit

    // Step 1: Finding last digit
    ld = n % 10;
    printf("Last digit is: %d\n", ld);

    // Step 2: Finding first digit
    while (temp >= 10) {
        temp = temp / 10;
    }
    fd = temp;
    printf("First digit is: %d\n", fd);

    // Step 3: Print sum
    sum = fd + ld;
    printf("Sum of first and last digit is: %d\n", sum);

    return 0;
}
