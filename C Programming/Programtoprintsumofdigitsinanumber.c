#include<stdio.h>
int main()
{
    int n = 4597;
    while(n > 0) {
        int digit = n % 10;
        printf("%d\n", digit);
        n = n / 10;
    }
    return 0;
}
