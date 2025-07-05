#include<stdio.h>
int main()
{
     int n,i,j,a[100],key;
   printf("Enter element size =");
   scanf("%d",&n);
   printf("Enter a Element =");
     for(i=0;i<n;i++)
   scanf("%d",&a[i]);
    
    printf("Enter key =");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
           for(j=i;j<n-1;j++)
           a[j]=a[j+1];
        n--;
        i--;
        }
    }
    for(i=0;i<n;i++)
    printf("\t%d",a[i]);
}