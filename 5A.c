#include <stdio.h>
void main()
{
    int num,rem,sum=0;
    printf("Enter any number");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        sum=sum+rem;
        num/=10;
    }
    printf("Sum of digits in given number is %d",sum);
}