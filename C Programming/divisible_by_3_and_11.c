#include <stdio.h>

int main()
{
    // Declare a variable
    int a = 33;

    // Check if divisible by both 3 and 11
    if (a % 3 == 0 && a % 11 == 0)
        printf("Divisible by both 3 & 11\n");
    else
        printf("Not divisible by both 3 & 11\n");

    return 0;
}
