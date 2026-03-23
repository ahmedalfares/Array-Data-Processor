#include <stdio.h>
void maxmin(int a[]);
int main()
{
   int i,a[5];
   printf("ENTER 5 VALUES FOR THE ARRAY:");
   for (i=0;i<5;i++)
   scanf("%d",&a[i]);
   maxmin(a);
    return 0;
}
void maxmin(int a[5])
{
    int max,min,i,sum=0;
    float avg;
    max=a[0];
    min=a[0];
    for(i=0;i<5;i++)
    {
        if (max<a[i])
        max=a[i];
        if (min>a[i])
        min=a[i];
    }
    printf("MAX AND MIN VALUES ARE: %d, %d",max, min);
    for(i=0;i<5;i++)
    {
        sum+=a[i];
    }
    avg=sum/5.0;
    printf("\nSUM AND AVG VALUES ARE :%d, %f",sum, avg);
}
