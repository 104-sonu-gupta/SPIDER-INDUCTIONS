#include<stdio.h>

void left2right(int arr[],int len)
{
    int temp=arr[0];
    for (int i = 0 ; i<len ; i++)
    {
        arr[i]=arr[i+1];
    }
    arr[len-1]=temp;    
    
    printf("\n LEFT SHIFT : ");
    for (int i = 0; i < len; i++)
    {
        printf("%d   ",arr[i]);
    }
}
void main()
{
    
    int len;
    printf("Enter array elements : ");
    scanf("%d",&len);
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        printf("Enter element %d :- ",i+1);
        scanf("%d",&arr[i]);
    }
    left2right(arr,len);
}