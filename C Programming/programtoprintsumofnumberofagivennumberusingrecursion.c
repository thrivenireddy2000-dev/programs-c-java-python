#include <stdio.h>

// Function declaration
int sum(int n);

int main() {
    int p = 10;
    int res = sum(p);
    printf("Sum of first %d numbers is: %d\n", p, res);
    return 0;
}

int sum(int n) {
    if (n == 1)
        return 1;
    else
        return n + sum(n - 1);
}
