#include<stdio.h>
int main()
{
     int n,i,j,a[100],k,key;
   printf("Enter element size =");
   scanf("%d",&n);
   printf("Enter a Element =");
     for(i=0;i<n;i++)
   scanf("%d",&a[i]);
    
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                for(k=j;k<n-1;k++)
                a[k]=a[k+1];
            n--;
            j--;
            }
        }

    }
    for(i=0;i<n;i++)
    printf("\t%d",a[i]);
}