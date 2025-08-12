#include <stdio.h>

int main() {
    int n, i, p = 0; // Declare 'n'

    // Read the number from the user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Numbers <= 1 are not prime
    if (n <= 1) {
        printf("Not a prime number");
        return 0;
    }

    // Check divisibility from 2 to n/2
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            p = 1;
            break;
        }
    }

    if (p == 0) {
        printf("It is a prime number");
    } else {
        printf("Not a prime number");
    }

    return 0;
}
