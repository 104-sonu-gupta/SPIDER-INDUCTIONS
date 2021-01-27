#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void generator(int arr[],int count)
{
    srand(time(0));

    for (int i = 0; i < count; i++)
    {
        arr[i]=rand()%100+10;
    }

}

void traverse(int arr[],int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("%d ",arr[i]);
    }
}

void bubble_sort(int arr[],int count)
{
    for (int i = 1; i < count; i++)
    {
        for(int j=0;j<count-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void main()
{
    int arr[50];
    int n;
    printf(" ~ Enter number of elements : ");
    scanf("%d",&n);

    generator(arr,n);
    printf("\n\t ~ THE UNSORTED ARRAY IS : ");
    traverse(arr,n);

    bubble_sort(arr,n);
    printf("\n\n\t ~ THE SORTED ARRAY IS   : ");
    traverse(arr,n);
    printf("\n\n");
}
