#include <stdio.h>

// function declaration
void add();

int main()
{
    // function calls
    add();
    add();
    add();
    return 0;
}

// function definition
void add()
{
    int a = 10;
    int b = 20;
    int c = a + b;
    printf("Result is: %d\n", c);
}
