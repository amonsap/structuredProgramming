#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum;
    sum = 10+20;
    printf("sum=%d\n",sum);
    printf("%-10s   %5.2f   \n","joey",25000.45);
    printf("%-10s   %5.2f   \n","jj",35000.45);

    printf("5+10 = %d\n",5+10);
    printf("10/3.0 %f",10/3.0);
    printf("3/10 =%d\n",3/10);
    printf("3/10.0 =%f\n",3/10.0);

    printf("Your name = %10s %s\n","Joy","CS");
    return 0;
}

