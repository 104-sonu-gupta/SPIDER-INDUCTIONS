#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void primeSieve(int n)
{
    int prime[10000] = {0};
    for(int i=2; i<=n;i++)
    {
        if(prime[i]==0)
        {
            for(int j=i*i ; j<=n ; j+=i)
            {
                prime[j]=1;
            }
        }
    }

    for(int i =2 ;i<=n;i++)
    {
        if(prime[i]==0)
        {
            printf("%d  ",i);
        }
    }

}

void main()
{
    system("cls");

    primeSieve(30);
}