#include <stdio.h>

int isPrime(int a);

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers up to %d are:\n", n);

    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i) == 1)
        {
            printf("%d ", i);
        }
    }

    return 0;
}

int isPrime(int a)
{
    int i, flag = 0;

    if (a == 0 || a == 1)
    {
        return 0;           // not prime
    }

    for (i = 2; i <= a / 2; i++)
    {
        if (a % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        return 1;           // prime
    else
        return 0;           // not prime
}
