#include <stdio.h>
#include <stdlib.h>
#define col 100
#define row 100
void printmatrixA(int MatrixA[row][col],int N,int M)
{
    int i=0,j=0;
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            printf ("%d\t",MatrixA[i][j]);
        }
        printf("\n");
    }
}
void printmatrixB(int MatrixB[row][col],int N,int M)
{
    int i=0,j=0;
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            printf ("%d\t",MatrixB[i][j]);
        }
        printf("\n");
    }
}
void DotProdcut(int N,int M,int MatrixA[row][col],int MatrixB[row][col],int C[100])
{
      int i=0,j=0;
      for (i=0;i<M;i++){
               for(j=0;j<N;j++){
                  C[i]+=(MatrixA[j][i]*MatrixB[j][i]) ;
               }
                  printf("%d ",C[i]);
          }
}
void DotProdcutByRow(int N,int M,int MatrixA[row][col],int MatrixB[row][col],int D[100])
{
      int i=0,j=0;
      for (i=0;i<N;i++)
      {
               for(j=0;j<M;j++)
            {
                  D[i]+=(MatrixA[i][j]*MatrixB[i][j]) ;
            }
                printf("%d\n",D[i]);
       }
}
int main()
{
    int N,M;
    int i=0,j=0;
        do
        {
          printf("Enter number of rows:");
          scanf("%d",&N);
        }while(N<=0||N>100);
        do
        {
         printf("Enter number of columns:");
         scanf("%d",&M);
        }while(M<=0||M>100);
    int MatrixA[row][col];
    int MatrixB[row][col];
    printf("Enter each element of the input matrix A:\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            printf("x[%d][%d]=",i,j);
            scanf("%d",&MatrixA[i][j]);
        }
    }
    printf("Enter each element of the input matrix B:\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            printf("x[%d][%d]=",i,j);
            scanf("%d",&MatrixB[i][j]);
        }
    }
    int C[100],D[100];
    printf("Matrix A:\n");
    printmatrixA(MatrixA,N,M);
    printf("Matrix B:\n");
    printmatrixB(MatrixB,N,M);
    printf("Column dot product output:\n");
    DotProdcut(N,M,MatrixA,MatrixB,C);
    printf("\nRow dot product output:\n");
    DotProdcutByRow(N,M,MatrixA,MatrixB,D);
    return 0;
}
