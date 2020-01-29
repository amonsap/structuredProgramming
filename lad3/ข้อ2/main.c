#include <stdio.h>
#include <stdlib.h>

int main()
{

    char name [40] = "Amonsap Saenprasit";
    int distance = 10; //Distance from my house to shool in kilometer
    int velocity = 3 ; //Velocity in Kilometer per hour
    int Hours = 3;
    int mins = 19;
    int secs = 59;

     printf("My name is %s\n",name);
     printf("Distance between house and school  : %d KMs\n",distance);
     printf("I walk by velocity (KM / Hour)     : %d\n",velocity);
     printf("Time from home to school           : %d Hours, %d mins, %d secs",Hours,mins,secs);

    return 0;
}
