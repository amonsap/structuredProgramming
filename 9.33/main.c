#include <stdio.h>
#include <stdlib.h>

int main()
{
    int I=0,a=0,e=0,i=0,o=0,u=0,n=0;
    char word[50];
    printf("Enter word:");
    for (I=0;I<=50;I++)
    {
        scanf("%c",&word[I]);
        if(word[I]=='\n')
        {
            break;
        }
        if(word[I]== 'a')
        {
            a += 1;
        }
        if(word[I]== 'e')
        {
            e += 1;
        }
        if(word[I]== 'i')
        {
            i += 1;
        }
        if(word[I]== 'o')
        {
            o += 1;
        }
        if(word[I]== 'u')
        {
            u += 1;
        }
        n+=1;
    }
     for (I=0;I<n;I++)
    {
        printf("%c",word[I]);
    }
        printf("\na : ");
        for (I=0;I<a;I++)
        {
            printf("*");
        }
        printf("\ne : ");
        for (I=0;I<e;I++)
        {
            printf("*");
        }
        printf("\ni : ");
        for (I=0;I<i;I++)
        {
            printf("*");
        }
        printf("\no : ");
        for (I=0;I<o;I++)
        {
            printf("*");
        }
        printf("\nu : ");
        for (I=0;I<u;I++)
        {
            printf("*");
        }
    return 0;
}
