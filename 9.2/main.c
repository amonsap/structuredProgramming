#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
     int i=0,N;
    int max,min,sum=0,sum2=0;
    float Ave,SD;
    printf("Enter number of scores :");
    scanf("%d",&N);
    int inpN[N];
    for(i=0;i<N;i++)
    {

        printf("Enter the %d-th score: ",i);
        scanf("%d",&inpN[i]);
    if(i==0)
    {
        max=inpN[i];
        min=inpN[i];
    }
    if (max < inpN[i])
    {
        max=inpN[i];
    }
    if (min>inpN[i])
    {
        min=inpN[i];
    }
        sum += inpN[i];
    }
        Ave = sum/N;
        for(i=0;i<N;i++)
        {
          sum2 += ((inpN[i]-Ave)*(inpN[i]-Ave));
        }
        sum2 = sum2/(N-1);
        SD = sqrt(sum2);
    printf("Maximum score is %d",max);
    printf("\nminmum score is %d",min);
    printf("\nAverge of score is %.2f",Ave);
    printf("\nSD is %.2f",SD);
    return 0;
}

