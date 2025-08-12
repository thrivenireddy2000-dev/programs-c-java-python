#include <stdio.h>
int main()
{
    int a = 0;
    int b = 1;
    int c = a + b;

    printf("%d %d ", a, b); // space after numbers for readability

    while (c <= 100)
    {
        printf("%d ", c); // print the next Fibonacci number
        a = b;
        b = c;
        c = a + b; // calculate next number
    }

    return 0;
}
