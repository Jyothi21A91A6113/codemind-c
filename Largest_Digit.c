#include<stdio.h>
int main()
{
    int n,sum=0,l=0;
    scanf("%d",&n);
    while(n>0)
    {
        sum=n%10;
        if(sum>l)
        {
            l=sum;
        }
        n=n/10;
    }
    printf("%d",l);
    return 0;
}