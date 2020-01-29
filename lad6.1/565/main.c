#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a = 0;
    char b = 0;
    char c = 0;
    char enter ;

    scanf("%c%c%c",&a,&b,&enter);
    scanf("%c%c",&c,&enter);

    printf("a=%d b=%d c=%d",a,b,c);

    //if(a=='A' || b=='B'){
    //printf("a is \'A\'\n");
    //printf("----------\n");
    //}else{printf("a is not \'A\'\n");
    //}
    return 0;
}
