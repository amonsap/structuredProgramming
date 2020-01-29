#include <stdio.h>
#include <stdlib.h>
#define col 100
#define row 100
void printmatrix(int Matrix[row][col],int N,int M)
{
    int i=0,j=0;
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            printf ("%d\t",Matrix[i][j]);
        }
        printf("\n");
    }
}
void copymatrix(int N,int M,int matrixcopy[row][col],int matrix[row][col])
{
    int i=0,j=0;
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            matrixcopy[i][j]=matrix[i][j];
        }
        printf("\n");
    }
}
void tra(int N,int M,int matrix[row][col])
{
    int i=0,j=0;
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%d\t",matrix[j][i]);
        }
        printf("\n");
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
    int matrix[row][col];
    int matrixcopy[row][col];
    printf("Enter each element of the input matrix:\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            printf("x[%d][%d]=",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("Source matrix\n");
    printmatrix(matrix,N,M);
    printf("Destination matrix after copying");
    copymatrix(N,M,matrixcopy,matrix);
    printmatrix(matrix,N,M);
    printf("transpose matrix of x\n");
    tra(N,M,matrix);

    return 0;
}
