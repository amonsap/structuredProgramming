#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,N,Max=0,Min=0,Sum=0,inp;
    float Ave,Aver;
        printf("Enter the number of entries: ");
        scanf("%d",&N);
        Ave=N;
        for (i=0;i>N;i==i){
           printf("please enter a positive integer !\n");
           printf("Enter the number of entries: ");
           scanf("%d",&N);
        }
    do{
        printf("Enter a number for enter %d:",i+1);
        scanf("%d",&inp);
        Sum = Sum+inp;
        Aver = Sum/Ave;
        if(i==0){
            Min=inp;
        }else if (Min>inp){
            Min=inp;
        }
        if(i==0){
            Max=inp;
        }else if (Max<inp){
            Max=inp;
        }
        i++;
    }while(i<N);
        printf("Min =%d\n",Min);
        printf("Max =%d\n",Max);
        printf("sum =%d\n",Sum);
        printf("Average = %.2f",Aver);
    return 0;
}
