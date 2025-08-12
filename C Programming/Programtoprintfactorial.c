#include <stdio.h>

// Function declaration
int fact(int n);

int main()
{
    int a = 5;
    int res;

    res = fact(a);
    printf("Factorial of given number %d is %d\n", a, res);

    return 0;
}

// Function definition
int fact(int n)
{
    int r = 1;
    int i;
    for (i = n; i >= 1; i--)
    {
        r = r * i;
    }
    return r;
}
