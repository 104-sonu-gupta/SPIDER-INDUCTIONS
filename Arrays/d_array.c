#include<stdio.h>
#include<stdlib.h>
#include<string.h>



void main()
{
    system("cls");
    int a[5]={1,2,3,4,5};
    int b[5];
    for (int i = 0,k=4; i < 5 ; i++, k--)
    {
        b[k]=a[i];
    }
    for (int i = 0; i < 5 ; i++)
    {
        printf("%d  ",b[i]);
    }    
}