#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {
        // spaces before stars
        for (j = 1; j <= (i - 1); j++) {
            printf("  "); // two spaces for alignment
        }

        // stars
        for (j = 1; j <= 5; j++) {
            printf(" * ");
        }

        printf("\n");
    }

    return 0;
}
