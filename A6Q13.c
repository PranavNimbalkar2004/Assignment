#include<stdio.h>
int main()
{
    int a[100],n,odda[100],evena[100],i,oddcount=0,evencount=0;
    printf("Enter size =");
    scanf("%d",&n);
    printf("\n Enter Elements =");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            evena[evencount]=a[i];
            evencount++;

        }
        else{
            odda[oddcount]=a[i];
            oddcount++;

        }
    }
    printf("\n even array =\n");
    for(i=0;i<evencount;i++)
    printf("\t%d",evena[i]);
    
    printf("\n odd array =\n");
    for(i=0;i<oddcount;i++)
    printf("\t%d",odda[i]);
}