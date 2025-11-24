#include<stdio.h>
int main()
{
    int n;
    printf("Enter how many numbers: ");
    scanf("%d", &n);

    int num[n];

    printf("Enter the numbers: \n");
    for(int i=0; i<n; i++)
    {
        printf("num[%d]= ", i+1);
        scanf("%d", &num[i]);
    }
    int temp;
    for(int j=0; j<n; j++)
    {
        for(int i=0; i<n-1; i++)
        {
            if(num[i]>num[i+1])
            {
                temp= num[i];
                num[i]= num[i+1];
                num[i+1]= temp;
            }
        }
    }
    printf("The largest number in the array is: %d", num[n-1]);

}
