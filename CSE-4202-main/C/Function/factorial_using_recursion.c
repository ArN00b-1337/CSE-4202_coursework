#include <stdio.h>
int factorial(int n);

int main()
{
    int n;
    printf("Enter the number n: ");
    scanf("%d", &n);

    printf("The factorial of %d is %d", n, factorial(n));
    return 0;
}

int factorial(int n)
{
    if (n != 1)
    {
        return n * factorial(n - 1);
    }
    else
    {
        return n;
    }
}