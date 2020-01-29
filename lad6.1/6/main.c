#include <stdio.h>
#include <stdlib.h>

int main()
{
    int B1,B2,B3,B4,B5,B6,B7,B8;
    int BiN;
    int DeC1;
    float DeC2;
    float DeC3;
    printf("Enter Binary Floating point (bbbb.ffff) : ");
    scanf("%d%d%d%d%d%d%d%d",&B1,&B2,&B3,&B4,&B5,&B6,&B7,&B8);

    printf("Binary = %d%d%d%d.%d%d%d%d\n",B1,B2,B3,B4,B5,B6,B7,B8);

    DeC1 = B1*(8)+B2*(4)+B3*(2)+B4*(1);
    DeC2 = B5*(0.5)+B6*(0.25)+B7*(0.125)+B8*(0.0625);
    DeC3 = DeC1+DeC2;

    printf("Decimal = %f",DeC3);
    return 0;
}
