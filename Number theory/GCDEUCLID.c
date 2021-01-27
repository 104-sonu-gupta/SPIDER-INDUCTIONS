#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int gcd(int a, int b)
{
    if (b == 0)
        return a;
   return gcd(b, a % b);
}

void main()
{
    system("cls");

    int a,b;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);

    int gc  = gcd(a,b);

    int lc = (a*b)/gc;
    printf("HCF of %d and %d is  = %d",a,b,gc);
    printf("\nLCM of %d and %d is  = %d",a,b,lc);
}