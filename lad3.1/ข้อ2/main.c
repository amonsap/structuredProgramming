#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name [40] = "Amonsap Saenprasit";
    int distance = 10; //Distance from my house to school in kilometer
    int velocity = 3 ; //Velocity in Kilometer per hour
    int Hours;
    Hours=(float)distance/velocity;
    int mins;
    mins=((float)distance/velocity-Hours)*60;
    int secs;
    secs=((((float)distance/velocity-Hours)*60)-mins)*60;
     printf("My name is %s\n",name);
     printf("Distance between house and school  : %d KMs\n",distance);
     printf("I walk by velocity (KM / Hour)     : %d\n",velocity);
     printf("Time from home to school           : %d Hours, %d mins, %d secs\n",Hours,mins,secs);

    return 0;
}
