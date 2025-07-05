#include<stdio.h>
int main()
{
    int i,n,avg,sum=0,a;
    printf("Enter size =");
    scanf("%d",&n);
    printf("Enter Elements =");
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
        sum=sum+a[i];

    }
    avg=sum/n;
    printf("average=%.2f",avg);
    
}