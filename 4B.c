#include <stdio.h>
int binary(int x[],int low,int high,int key)
{
    int mid=low+(high-low)/2;
    if(low<=high)
    {
        if(x[mid]==key)
        {
            return mid;
        }
        if(x[mid]>key)
        {
            return binary(x,low,mid-1,key);
        }
        if(x[mid]<key)
        {
            return binary(x,mid+1,high,key);
        }
        return -1;
    }
}
int main()
{
    int arr[50],key,size,result;
    printf("Enter the size of array:");
    scanf("%d",&size);
    printf("Enter elements of array:");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the key:");
    scanf("%d",&key);
    result=binary(arr,0,size-1,key);
    if(result != -1)
    {
        printf("Element found at index %d",result);
    }
    else
    {
        printf("Element not found!!!!");
    }
    return 0;
}