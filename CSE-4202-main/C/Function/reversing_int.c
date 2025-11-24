#include <stdio.h>

int reverse(int n);

int main()
{
    int n;
    printf("Enter the intger number: ");
    scanf("%d", &n);

    printf("The reversed number: %d\n", reverse(n));
    return 0;
}

int reverse(int n)
{
    int rev = 0;
    while (n != 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}