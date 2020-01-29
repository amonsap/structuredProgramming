#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int unsAns1,unsAns2,com1,com2;
    char cont='y';
    printf("Guess the flipping coin (1 for heads, 0 for tails) :\n");
    do{ printf("Enter the first answer : ");
        scanf("%d",&unsAns1);
        printf("Enter the first answer : ");
        scanf("%d",&unsAns2);
        scanf("time(NULL)");
        com1 = rand()%2;
        scanf("time(NULL)");
        com2 = rand()%2;
        printf("Your answer is %d-%d,",unsAns1,unsAns2);
        printf(" Com answer = %d-%d.",com1,com2);
        if((unsAns1==com1)&&(unsAns2==com2)){
            printf("Your answer correct");
        }else if ((unsAns1==com2)&&(unsAns2==com1)){
            printf(" Your answer correct");
        }else{
            printf(" Your answer wrong!");
        }
        printf("\nDo you want to continue? (y/n)");
        scanf("\n%c",&cont);
    }while ((cont=='y')||(cont=='Y'));
    return 0;
}
