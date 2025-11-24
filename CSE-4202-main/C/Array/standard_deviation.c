#include<stdio.h>
#include<math.h>
int main()
{
    int n, result=0;
    printf("Enter how many numbers: ");
    scanf("%d", &n);

    float num[n];

    printf("Enter the numbers: \n");
    for(int i=0; i<n; i++)
    {
        printf("num[%d]= ", i+1);
        scanf("%f", &num[i]);
        result+=num[i];
    }
    float avg=0, x, sum;
    avg= (float)result/n;
    for(int i=0; i<n; i++)
    {
        x= num[i]-avg;
        num[i]= pow(x, 2);
        sum += num[i];
    }
    float y=0;
    y=sqrt(sum);
    printf("Standard deviation: %.3f\n", y);
}
