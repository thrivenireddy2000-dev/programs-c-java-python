#include <stdio.h>

int main() {
    // Declare variables
    int i;
    int sum = 0;

    // Loop from 1 to 5
    for (i = 1; i <= 5; i++) {
        sum = sum + i;  // Add current value of i to sum
    }

    // Print result
    printf("Result is: %d", sum);

    return 0;
}
