#include<stdio.h>
int main()
{
    int n = 121;
    int num = n;
    int ld = 0;
    int rev = 0;

    while(n > 0) // removed semicolon
    {
        ld = n % 10;
        rev = (rev * 10) + ld;
        n = n / 10;
    }

    if(num == rev)
        printf("Yes, it is a palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}
