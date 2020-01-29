#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Row,Col;
    printf("Row of Matrix A ");
    scanf("%d",&Row);
    printf("Col of Matrix A ");
    scanf("%d",&Col);
    int A[Row][Col];
    int B[Row][Col];
    int C[Row][Col];
    int i=0,j=0,MatrixA;
    for(i=0;i<Row;i++)
    {
        for(j=0;j<Col;j++)
        {
            printf("A[%d][%d]",i,j);
            scanf("\n%d",&MatrixA);
        }
    }

    printf("Row of Matrix B ");
    scanf("%d",&Row);
    printf("Col of Matrix B ");
    scanf("%d",&Col);
    for(i=0;i<Row;i++)
    {
        for(j=0;j<Col;j++)
        {
            printf("B[%d][%d]",i,j);
            scanf("\n%d",&MatrixA);
        }
    }

    return 0;
}
