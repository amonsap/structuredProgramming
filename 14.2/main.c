#include <stdio.h>
#include <stdlib.h>

int main()
{
    char fileName[40];
    printf("Enter a file name to read : ");
    scanf("%s",fileName);

    FILE *fp;
    fp=fopen(fileName,"r");

    if(fp==NULL){
        printf("Error : %s does not exist",fileName);
        exit(1);
    }

    printf("-------------------------------------------------------\n");
    printf("Student ID\t\tName\t\tScore\tGrade\n");
    printf("-------------------------------------------------------\n");

    int ID,score,N;
    char Name[40],Lastname[40];

    while(feof(fp)==0){
        N = fscanf(fp,"%d",&ID);
        if(N<0)
        {
            break;
        }
        N = fscanf(fp,"%s",Name);
        N = fscanf(fp,"%s",Lastname);
        N = fscanf(fp,"%d",&score);

        printf("%d\t\t%s %s\t\t%d",ID,Name,Lastname,score);
        if((score>=80)&&(score<=100))
        {
            printf("\t  A\n");
        }
        else if((score>=70)&&(score<80))
        {
            printf("\t  B\n");
        }
        else if((score>=60)&&(score<70))
        {
            printf("\t  C\n");
        }
        else if((score>=50)&&(score<60))
        {
           printf("\t  D\n");
        }
        else
        {
            printf("\t  F\n");
        }
    }
    fclose(fp);

    return 0;
}
