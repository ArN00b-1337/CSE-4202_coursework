#include <stdio.h>
int fibonacci(int n);

int fibonacci(int n)
{
    int fib = 0, a = 0, b = 1;

    if (n < 2)
    {
        printf("0");
    }
    else if (n == 2)
    {
        printf("0, 1");
    }

    else
    {
        printf("Fibonacci series(%d elements): \n", n);
        for (int i = 2; i <= n; i++)
        {
            printf("%d ", a);
            fib = a + b;
            a = b;
            b = fib;
        }
    }
    return 0;
}

int main()
{
    int n;
    printf("Enter the nth number: ");
    scanf("%d", &n);

    fibonacci(n);
    return 0;
}