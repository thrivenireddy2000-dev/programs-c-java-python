#include <stdio.h>

int main()
{
    int n, i;
    int p; // prime flag
    int c = 0; // prime count

    for (n = 2; n < 100; n++)
    {
        p = 0;
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                p = 1; // not prime
                break; // no need to check further
            }
        }

        if (p == 0) // if prime
        {
            c++;
        }

        if (c == 6) // 6th prime found
        {
            printf("%d", n);
            break;
        }
    }

    return 0;
}
