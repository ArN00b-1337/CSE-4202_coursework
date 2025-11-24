#include<stdio.h>
int main()
{
    int n, result=0;
    printf("Enter how many numbers: ");
    scanf("%d", &n);

    int num[n];

    printf("Enter the numbers: \n");
    for(int i=0; i<n; i++)
    {
        printf("num[%d]= ", i+1);
        scanf("%d", &num[i]);
        result+=num[i];
    }
    float avg=0;
    avg= (float)result/n;
    printf("The average of your numbers is: %.3f", avg);
}
