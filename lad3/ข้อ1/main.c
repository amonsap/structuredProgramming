#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name [40] = "Amonsap Saenprasit";
    int distance = 10; //Distance from my house to shool in kilometer
    int velocity = 3 ; //Velocity in Kilometer per hour
    float time = 0.0;

     time = (float)distance/velocity;

     printf("My name is  %s\n",name);
     printf("Distance between house and school  : %d KMs\n",distance);
     printf("I walk by velocity (KM / Hour)     : %d\n",velocity);
     printf("I walk from home to school take    : %.2f Hours\n",time);

    return 0;
}
