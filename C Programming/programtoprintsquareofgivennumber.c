#include <stdio.h>

// function declaration
int square(int p);

int main()
{
    int a;
    // read a number from user
    printf("Enter a number: ");
    scanf("%d", &a);

    // function call
    int r = square(a);
    printf("Square is: %d\n", r);

    return 0;
}

// function definition
int square(int p)
{
    return p * p;
}
