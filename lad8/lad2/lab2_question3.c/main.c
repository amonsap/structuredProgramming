#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a,b,c,d;
    int sum;
    int sub;
    int multiply;
    int division;
    int result;
    a=10;
    b=2;
    c=3;
    d=4;
    sum = a+b+c+d;
    printf("sum is %d\n",sum);
    sub = b-a;
    printf("sub is %d\n",b-a);
    multiply = a*b*c*d;
    printf("multiplication is %d\n",multiply);
    division = a/c;
    printf("division is %d\n",a/c);
    result = 10/3.0;
    printf("result1 is %0.3f\n",10/3.0);

    return 0;
}
