#include <stdio.h>
int main()
{
    //declare variable
    int a;
    // read value
    scanf("%d",&a);

    // check condition
    if(a==0)
    printf("given value is equal to zero");
    else if(a>0)
    printf(" given value is positive");
    else
    printf("given value is negative");

    return 0;
}