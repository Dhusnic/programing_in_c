#include<stdio.h>
int main()
{
    int n,rem,sum=0;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        sum=rem+sum;
        n=n/10;

    }
    printf("%d",sum);
     
}