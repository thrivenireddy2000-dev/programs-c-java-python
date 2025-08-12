#include <stdio.h>
int main()
{
    // declare 2 variable  f,c 
    float f,c;

    printf("please enter f value: ");
    scanf("%f",&f);
    //calculate c value
    c=((f-32)*5)/9;
    //declare result
    printf("fahrenheit to celsius :%f",c);
    return 0;
}

