#include <stdio.h>
#include <stdlib.h>
#define row 20
#define col 20
void inputMatrixA(int nA,int mA,int A[row][col],char inputA[5])
{
        int i=0,j=0;
        printf("Input %s\n",inputA);
    for(i=0;i<nA;i++)
    {
        for(j=0;j<mA;j++)
        {
            printf("A[%d][%d]",i,j);
            scanf("\n%d",&A[i][j]);
        }
        printf("\n");
    }
}
void inputMatrixB(int nB,int mB,int B[row][col],char inputB[5])
{
        int i=0,j=0;
        printf("Input %s\n",inputB);
    for(i=0;i<nB;i++)
    {
        for(j=0;j<mB;j++)
        {
            printf("B[%d][%d]",i,j);
            scanf("\n%d",&B[i][j]);
        }
        printf("\n");
    }
}

void printMatrixA(int nA,int mA,int A[row][col],char nameA[5])
{
    printf("-----------%s--------\n",nameA);
    int i=0,j=0;
    for(i=0;i<nA;i++)
    {
        for(j=0;j<mA;j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
}
void printMatrixB(int nB,int mB,int B[row][col],char nameB[5])
{
    printf("---------%s--------\n",nameB);
    int i=0,j=0;
    for(i=0;i<nB;i++)
    {
        for(j=0;j<mB;j++)
        {
            printf ("%d\t",B[i][j]);
        }
        printf("\n");
    }
}
void MultiplyMatrix(int nC,int mC,int A[row][col],int B[row][col],int C[row][col],char nameC[5])
{
    int i=0,j=0,k=0;
    printf("---------%s---------\n",nameC);
    for(i=0;i<nC;i++)
     {
         for(j=0;j<mC;j++)
         {
            int sum=0;
             for(k=0;k<nC;k++)
             {
                 sum += A[i][k]*B[k][j];
             }
             C[i][j] = sum;
         }
     }
      for(i=0;i<nC;i++)
    {
        for(j=0;j<mC;j++)
        {
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }

}

int main()
{
     int nA,mA;
     int A[row][col];
     int nB,mB;
     int B[row][col];
     int nC,mC;
     int C[row][col];
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

    inputMatrixA(nA,mA,A,"A");

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

    if(nA>nB)
    {
        nC=nB;
    }else
    {
        nC=nA;
    }
    if(mA>mB)
    {
        mC=mB;
    }else
    {
        mC=mA;
    }

    inputMatrixB(nB,mB,B,"B");

    printMatrixA(nA,mA,A,"A");
    printMatrixB(nB,mB,B,"B");
    MultiplyMatrix(nC,mC,A,B,C,"C");



    return 0;
}
