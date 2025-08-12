#include <stdio.h>

int main() {
    int n, i, p, c = 0;

    for (n = 2; n < 100; n++) {
        p = 0;
        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                p = 1;
                break;
            }
        }
        if (p == 0) {
            c++;
            if (c == 7) {
                printf("%d ", n);
                break;
            }
        }
    }

    return 0;
}
