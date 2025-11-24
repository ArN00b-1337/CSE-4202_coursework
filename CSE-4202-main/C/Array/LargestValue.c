#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the size of the Array: ");
    scanf("%d", &n);
    int numbers[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }
    int c, location = 0;
    for (c = 1; c < n; c++)
    {
        if (numbers[location] < numbers[c])
        {
            location = c;
        }
    }
    printf("Largest element= %d and location= %d", numbers[location], location+1);
}