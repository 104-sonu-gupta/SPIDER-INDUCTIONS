#include<stdio.h>

void right2left(int arr[],int len)
{
    int temp=arr[len-1];
    for (int i = len-1; i>=0 ; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=temp;
    printf("\n RIGHT SHIFT : ");
    
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
    
    right2left(arr,len);
}