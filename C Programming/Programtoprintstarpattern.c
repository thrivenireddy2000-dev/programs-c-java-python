#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        // spaces
        for (j = i; j < 5; j++)
            printf(" ");

        // stars
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n"); // fixed typo
    }

    return 0;
}
