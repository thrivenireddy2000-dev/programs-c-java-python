#include <stdio.h>

// function declarations
void max(int, int);
void min(int, int);

int main()
{
    int a = 15;
    int b = 34;

    max(a, b);
    min(a, b);

    return 0;
}

void max(int a, int b)
{
    if (a > b)
    {
        printf("max is %d\n", a);
    }
    else
    {
        printf("max is %d\n", b);
    }
}

void min(int a, int b)
{
    if (a < b)
    {
        printf("min is %d\n", a);
    }
    else
    {
        printf("min is %d\n", b);
    }
}
