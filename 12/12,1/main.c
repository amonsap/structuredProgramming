#include <stdio.h>
#include <stdlib.h>
#define row 20
#define col 20
int main()
{
    int nA,mA;
    do
    {
      printf("Row of Matrix A ");
      scanf("%d",&nA);
    }while(nA<=0||nA>20);
    do
    {
      printf("Col of Matrix A ");
      scanf("%d",&mA);
    }while(mA<=0||mA>20);

    int A[row][col];
    int i=0,j=0;
    for(i=0;i<nA;i++)
    {
        for(j=0;j<mA;j++)
        {
            printf("A[%d][%d]",i,j);
            scanf("\n%d",&A[i][j]);
        }
        printf("\n");
    }
    int nB,mB;
    do
    {
       printf("Row of Matrix B ");
       scanf("%d",&nB);
    }while(nB<=0||nB>20);
    do
    {
       printf("Col of Matrix B ");
       scanf("%d",&mB);
    }while(mB<=0||mB>20);

    int B[row][col];
    for(i=0;i<nB;i++)
    {
        for(j=0;j<mB;j++)
        {
            printf("B[%d][%d]",i,j);
            scanf("\n%d",&B[i][j]);
        }
        printf("\n");
    }
    printf("---A---\n");
    for(i=0;i<nA;i++)
    {
        for(j=0;j<mA;j++)
        {
            printf ("%d\t",A[i][j]);
        }
        printf("\n");
    }
    printf("---B---\n");
    for(i=0;i<nB;i++)
    {
        for(j=0;j<mB;j++)
        {
            printf ("%d\t",B[i][j]);
        }
        printf("\n");
    }

    return 0;
}


