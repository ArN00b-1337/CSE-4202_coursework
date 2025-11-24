#include <stdio.h>

struct Complex
{
    int real;
    int imag;
};


int main()
{
    struct Complex n1, n2, sum;

    printf("Enter 1st real and imaginary number:\n");

    printf("Real     :");
    scanf("%d",&n1.real);

    printf("Imaginary:");
    scanf("%d",&n1.imag);

    printf("\n");

    printf("Enter 2nd real and imaginary number: \n");

    printf("Real     :");
    scanf("%d",&n2.real);

    printf("Imaginary:");
    scanf("%d",&n2.imag);


    sum.real= n1.real + n2.real;
    sum.imag= n1.imag + n2.imag;
    printf("\n");

    if(sum.imag>0)

    {
        printf("Sum= %d+%di\n", sum.real, sum.imag);
    }
    else if(sum.imag<0)
    {
        printf("Sum= %d%di\n", sum.real, sum.imag);
    }
    return 0;
}
