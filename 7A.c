#include <stdio.h>
int fibo(int n)
{
    if(n<=1)
    {
        return n;
    }
    else{
        return fibo(n-1)+fibo(n-2);
    }
    return 0;
}
void main()
{
    int n;
    printf("Enter the number of terms for series:");
    scanf("%d",&n);
    printf("Fibonnaci Series:");
    for(int i=0;i<n;i++)
    {
        printf("%d",fibo(i));
    }
}