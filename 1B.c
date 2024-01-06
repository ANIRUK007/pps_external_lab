#include <stdio.h>
int main()
{
    int arr[50],i,j,temp,size;
    printf("Enter the size:");
    scanf("%d",&size);
    printf("Enter the elements of array:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        for(j=0;j<size-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Elements after bubble sorting is:");
    for(i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
}