#include <stdio.h>

int main() {
    int marks[6];
    int i;

    // Input values into array
    printf("Enter 6 numbers:\n");
    for (i = 0; i < 6; i++) {
        scanf("%d", &marks[i]);
    }

    // Print only negative numbers
    printf("Negative numbers are:\n");
    for (i = 0; i < 6; i++) {
        if (marks[i] < 0) {
            printf("%d\n", marks[i]);
        }
    }

    return 0;
}
