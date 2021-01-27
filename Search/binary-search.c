#include<stdio.h>

int bin_search(int arr[],int size,int key)
{
    int low=0,mid,high=size;
    while(low<=high)
    {
        mid=(low+high)/2;

        if(arr[mid]==key)
        {
            return mid;
        }
        if(key<arr[mid])
            high=mid-1;
        else
        {
            low=mid+1;
        }
    }
    return -1;
}

void traverse(int arr[],int size)
{
    printf("\n\n\t ~ The array is : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d  ",arr[i]);
    }
}
void main(void)
{
    int arr[20];
    int key,size;
    
    printf("Enter array size (max..20) : ");
    scanf("%d",&size);

    printf("Enter array elements  : \n");
    for (int i = 0; i < size; i++)
    {
        printf("\n\tEnter element arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    printf("\n\nEnter element to search : ");
    scanf("%d",&key);
    
    int index = bin_search(arr,size,key);
    if(index==-1)
        printf("\n\n\t ~ Element not found !! ");
    else
    {
        printf("\n\t ~ Element found at index value = %d",index);
    }
    
    traverse(arr,size);


    
    
}
