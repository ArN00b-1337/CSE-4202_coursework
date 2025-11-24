#include <stdio.h>
void out(int list[], int n);           



void out(int list[], int n)            
{
    printf("Array= [");
    for (int i = 0; i < n; i++)
    {
        if (i < n - 1)
            printf("%d, ", list[i]);
        else
            printf("%d", list[i]);
    }
    printf("]\n");
}

int main()
{
    int n;
    printf("Enter the size of the Array: ");
    if (scanf("%d", &n) != 1 || n <= 0)
        return 1;
    int list[n];
    for (int i = 0; i < n; i++)
    {
        printf("At list[%d]= ", i);
        scanf("%d", &list[i]);
    }
    
    printf("Before sorting ");
    out(list, n);           



    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (list[j] > list[j + 1])
            {
                int temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }

    printf("After sorting ");
    out(list, n);       
    return 0;
}