#include <stdio.h>

// Function declaration
void aroperations(int x, int y);

int main()
{
    int a, b;

    a = 3;
    b = 4;
    aroperations(a, b);

    a = 54;
    b = 67;
    aroperations(a, b);

    a = 123;
    b = 432;
    aroperations(a, b);

    return 0;
}

// Function definition
void aroperations(int a, int b)
{
    printf("\nAddition result is: %d", a + b);
    printf("\nSubtraction result is: %d", a - b);
    printf("\nMultiplication result is: %d", a * b);
    printf("\nDivision result is: %d\n", a / b);
}
