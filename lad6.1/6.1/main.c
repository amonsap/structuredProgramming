#include <stdio.h>
#include <stdlib.h>

int main()
{
    int B1,B2,B3,B4,B5,B6,B7,B8;
    int Hex1,Hex2,Hex3;

    printf("Input Binary Number (8 digits) : ");
    scanf("%d%d%d%d%d%d%d%d",&B1,&B2,&B3,&B4,&B5,&B6,&B7,&B8);

    printf("Binary number is %d%d%d%d%d%d%d%d\n",B1,B2,B3,B4,B5,B6,B7,B8);
    Hex1 = B1*(128)+B2*(64)+B3*(32)+B4*(16)+B5*(8)+B6*(4)+B7*(2)+B8*(1);

    return 0;
}
