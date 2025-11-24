#include <stdio.h>

struct distance
{
    int feet;
    int inch;
};

int main()
{
    struct distance n1, n2, result, sum;

    printf("Enter 1st distance: \n");

    printf("Feet: ");
    scanf("%d",&n1.feet);
    printf("Inch: ");
    scanf("%d",&n1.inch);

    printf("Enter 2nd distance: \n");

    printf("Feet: ");
    scanf("%d",&n2.feet);
    printf("Inch: ");
    scanf("%d",&n2.inch);

    result.feet= n1.feet + n2.feet;
    result.inch= n1.inch + n2.inch;


    if(result.inch>12)

    printf("Sum= %dfeet %dinch\n", result.feet+result.inch/12, result.inch%12);
    return 0;
}
