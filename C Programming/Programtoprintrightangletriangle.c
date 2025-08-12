#include <stdio.h>

int main() {
    int i, t;
    for (i = 1; i <= 5; i++) { // rows
        for (t = 1; t <= i; t++) { // columns
            printf("* ");
        }
        printf("\n"); // move to next line
    }
    return 0;
}
