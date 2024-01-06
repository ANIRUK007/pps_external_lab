#include<stdio.h>
void main()
{
    int f,n;
    printf("Enter a number:");
    scanf("%d",&n);
    f=fac(n);
    printf("The factorial is %d",f);
}
int fac(int x)
{
    int res;
    if(x==0)
    {
        res=1;
    }
    else{
        res=x*fac(x-1);
    }
    return res;
}