#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    i=sqrt(n);
    if(i*i==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}