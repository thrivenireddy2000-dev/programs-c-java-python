#include <stdio.h>

// Function declaration
int fact(int n);

int main() {
    int n = 5;
    int res = fact(n);
    printf("Factorial is: %d\n", res);
    return 0;
}

int fact(int n) {
    printf("It is calculating %d * fact(%d - 1)\n", n, n);
    if (n > 1)
        return n * fact(n - 1);
    else if (n == 1)
        return 1;
    else
        return 0; // for negative numbers
}
