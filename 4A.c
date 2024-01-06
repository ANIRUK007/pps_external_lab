#include <stdio.h>
int main()
{
    int num,org,rev=0,d;
    printf("Enter the number:");
    scanf("%d",&num);
    org=num;
    while (num>0)
    {
        d=num%10;
        num =num/10;
        rev=rev*10+d;
    }
    if(rev==org)
    {
         printf("Its a pallindrome");
    }
    else
    {
        printf("Not a palindrome!!");
    }
}