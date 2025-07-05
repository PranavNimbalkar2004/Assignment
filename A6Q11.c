#include<stdio.h>
int main()
{
    int i,first,second,a[100],n;
    printf("Enter size =");
    scanf("%d",&n);
    printf("\nEnter Elemant =");
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
        if(a[i]=first)
        {
            if(a[i]>second)
            {
                second=a[i];
            }
        }
    }
    printf("First & second largest numbers is %d & %d\n",first,second);
    return 0;
}