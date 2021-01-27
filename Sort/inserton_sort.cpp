#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

void insertion_sort(int *a, int n)
{
    int i, j;
    int temp;

    for (i = 1; i < n; i++)
    {
        temp = a[i];
        j=i-1;
        while(j >= 0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
        for (int k = 0; k < n; k++)
        {
            cout<<a[k]<<" ";
        }
        cout<<endl;

        
        
    }
}

int main()
{
    system("cls");

    int arr[6] = {1, 4, 3, 5, 6, 2};
    int size = 6;
    insertion_sort(arr, size);

    return 0;
}