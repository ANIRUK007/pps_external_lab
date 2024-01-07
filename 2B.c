#include <stdio.h>
int main()
{
    int arr[50],i,j,temp,size;
    printf("Enter the Size of Array:");
    scanf("%d",&size);
    printf("Enter the element Of array");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;i<=size-1;j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[j];
                arr[j]=arr[i]
                arr[i]=temp;
            }
        }
    }
    printf("Elements after selection sorting:");
    for(i=0;i<size;i++)
    {
    printf("%d",arr[i]);
    }
}