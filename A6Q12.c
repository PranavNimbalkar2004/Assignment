#include<stdio.h>
int main()
{
    int i,n,min,a[100],first,second;
    printf("Etner a size =");
    scanf("%d",&n);
    printf("Enter a Element =");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    first=second=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>first)
        {
            first=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=first)
        {
        if(a[i]>second)
        {
            second=a[i];
        }
       }
    }
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
    {
      min=a[i];
    }

    }
    printf("\n min ele is %d",min);
    printf("\n second largest ele is %d\n",second);
    return 0;
}