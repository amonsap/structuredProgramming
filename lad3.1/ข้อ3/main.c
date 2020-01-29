#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[40]   = "";
    float distance,velocity;

    printf("Input your name     : ");
    scanf("%s",name);
    printf("Input Distance (KM)    : ");
    scanf("%f",&distance);
    printf("Input avg velocity (KM/H)  : ");
    scanf("%f",&velocity);

    int Hours;
    Hours = (float)distance/velocity;
    int mins;
    mins = (float)(distance/velocity-Hours)*60;
    int secs;
    secs = (((float)(distance/velocity-Hours)*60)-mins)*60;

    printf("My name is %s\n",name);
    printf("Distance between house and school : %.2f KMs\n",distance);
    printf("I walk by velocity (KM / Hour)    : %.2f\n",velocity);
    printf("Time from home to school          : %d Hours, %d mins, %d secs",Hours,mins,secs);

    return 0;
}
