#include<stdio.h>

struct time
{
    int hour;
    int min;
    int sec;
};

int main()
{
    struct time n1, n2;
    int diff, total1, total2;

    printf("Enter 1st time: \n");

    printf("Hour(s)  : ");
    scanf("%d",&n1.hour);
    printf("Minute(s): ");
    scanf("%d",&n1.min);
    printf("Second(s): ");
    scanf("%d",&n1.sec);

    printf("\n");

    printf("Enter 2nd time: \n");

    printf("Hour(s)  : ");
    scanf("%d",&n2.hour);
    printf("Minute(s): ");
    scanf("%d",&n2.min);
    printf("Second(s): ");
    scanf("%d",&n2.sec);

    total1= n1.hour*3600+n1.min*60+n1.sec;
    total2= n2.hour*3600+n2.min*60+n2.sec;

    printf("\n");

    if(total1>total2)
      {diff= total1-total2;}

    if(total2>total1)
      {diff= total2-total1;}
    int a, b, c;
    a= diff/3600;
    b= diff/60-(diff/3600)*60;
    c= diff%60;

    printf("Difference= %d Hour(s) %d Minute(s) %d Second(s)\n", a, b, c);
}
