#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float BN1,BN2;
    float Result;
    char Ope;

    printf("Input Decimal Number1: ");
    scanf("%f",&BN1);

    printf("Input Decimal Number2: ");
    scanf("%f%*c",&BN2);

    printf("Press Operator do you want to Process (+,-,*,/,^): ");
    scanf("%c",&Ope);

    if (Ope=='+'){
        Result = BN1+BN2;
        printf("Result %g%c%g = %g",BN1,Ope,BN2,Result);
    }

    if (Ope=='-'){
        Result = BN1-BN2;
        printf("Result %g%c%g = %g",BN1,Ope,BN2,Result);
    }
    if (Ope=='*'){
        Result = BN1*BN2;
        printf("Result %g%c%g = %g",BN1,Ope,BN2,Result);
    }
    if (Ope=='/'){
        Result = BN1/BN2;
        printf("Result %g%c%g = %g",BN1,Ope,BN2,Result);
    }
    if (Ope=='^'){
        Result = pow(BN1,BN2);
        printf("Result %g%c%g = %g",BN1,Ope,BN2,Result);
    }


    return 0;
}
