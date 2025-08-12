#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {
        // spaces
        for (j = 1; j <= (i - 1); j++) {
            printf(" * ");
        }

        // stars
        for (j = 1; j <= i; j++) {
            printf("  ");
        }

        printf("\n");
    }

    return 0;
}
