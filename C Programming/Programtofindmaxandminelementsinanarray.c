#include <stdio.h>

int main()
{
    int marks[7];
    int i, max, min;

    // Input 7 numbers
    for (i = 0; i < 7; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Initialize max and min with the first element
    max = marks[0];
    min = marks[0];

    // Find max and min
    for (i = 1; i < 7; i++)
    {
        if (marks[i] > max)
        {
            max = marks[i];
        }
        else if (marks[i] < min)
        {
            min = marks[i];
        }
    }

    // Output
    printf("Maximum value = %d\n", max);
    printf("Minimum value = %d\n", min);

    return 0;
}
