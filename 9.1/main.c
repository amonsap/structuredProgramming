#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i=0;
    printf("Enter the size of array (A and B):");
    scanf("%d",&N);
    printf("Enter elements of an array \"A\":\n");
     int inpA[N],inpB[N];
     for(i=0;i<N;i++)
    {
        printf("A[%d] = ",i);
        scanf("%d",&inpA[i]);
    }
    printf("Enter elements of an array \"B\":\n");
    for(i=0;i<N;i++)
    {
        printf("B[%d] = ",i);
        scanf("%d",&inpB[i]);
    }
        int sum;
    printf("A + B is");
    for (i=0;i<N;i++)
    {
        sum = inpA[i]+inpB[i];
        printf("\nA[%d] + B[%d] = %d",i,i,sum);
    }
    return 0;
}
