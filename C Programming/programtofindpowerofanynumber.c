#include<stdio.h>

int main()
{
    int base = 2;
    int exponent = 5;
    int i;
    int r = 1;

    for(i = 1; i <= exponent; i++)
    {
        r = r * base;
    }

    printf("%d power of %d is %d", base, exponent, r);
    return 0;
}
