#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *fp = fopen("D:/comsci_vocad.txt","r");

     if(fp==NULL)
     {
        printf("Error : does not exist");
        exit(1);
     }

    int id;
    char eng[20];
    char meaning[50];
    while(feof(fp)==0)
    {
        fscanf(fp,"%d\t%s\t%[^\n]s\n",&id,eng,meaning);
        printf("%d\t%s\t%s\n",id,eng,meaning);
    }
    printf("Finished.\n");
    fclose(fp);
    return 0;
}



