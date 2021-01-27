#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main(void)
{
    int order,prim_diag=0,sec_diag=0,i,j;
    printf("Enter order of the matrix : ");
    scanf("%d",&order);    
    int arr[order][order];

    for(i=0;i<order;i++)
        {
            for(j=0;j<order;j++)
            {
                printf("\t Enter matrix element A[%d][%d] : ",i,j);
                scanf("%d",&arr[i][j]);
            }
        }
    for (i = 0; i < order; i++)
    {
        for ( j = 0; j < order; j++)
        {
            if(i==j)            
                prim_diag+=arr[i][j];
            
            if((i+j)==order-1)            
                sec_diag+=arr[i][j];
        }
    }
    printf("\n\n The absolute diagonal difference is = %d \n\n",abs(sec_diag-prim_diag));
}