#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {
        // spaces before stars
        for (j = 1; j <= 5 - i; j++) {
            printf("  ");
        }

        // stars
        for (j = 1; j <= i; j++) {
            if (i == 5 || j == 1 || j == i)
                printf(" * ");
            else
                printf("   ");
        }

        printf("\n");
    }

    return 0;
}
