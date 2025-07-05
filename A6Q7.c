#include<stdio.h>
int main()
{
    int n,i,rev=0,rem;
    printf("Enter a No =");
    scanf("%d",&n);
    while(n>0)
    {
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("Reverse No is %d",rev);
}