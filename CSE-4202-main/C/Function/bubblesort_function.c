#include <stdio.h>

int sort(int a[], int n);
int input(int a[], int n);
int output(int a[], int n);

int main()
{
    int n;
    printf("Enter the array size: ");
    scanf("%d", &n);

    int num[n];

    input(num, n);
    printf("Before sorting:\n");
    output(num, n);

    sort(num, n);
    printf("After sorting:\n");
    output(num, n);

    return 0;
}

int input(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("num[%d]: ", i);
        scanf("%d", &a[i]);
    }
    return 0;
}

int output(int a[], int n)
{
    printf("The array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}

int sort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    return 0;
}