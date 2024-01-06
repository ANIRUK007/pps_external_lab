#include <stdio.h>
void main()
{
    int num,org,rem=0,d=0;
    printf("Enter the number:");
    scanf("%d",&num);
    org=num;
    while(num>0)
    {
        rem=num%10;
        d=d+rem*rem*rem;
        num=num/10;
    }
    if(d==org)
    printf("The number is armstrong");
    else
    printf("Not an armstrong number");
}