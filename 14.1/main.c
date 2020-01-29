#include <stdio.h>
#include <stdlib.h>

int main()
{
    char fileName[40] = "student.txt";
    FILE * fp;

        printf("Please enter a file name to write : ");
        scanf("%s",fileName);

    fp = fopen(fileName,"w");
    if(fp == NULL)
        {
            printf("Error: the file could not be created.\n");
            exit(1);
        }
    int id;
    int i=0;
    int N;
    int score;
    char Name[40];
    printf("Enter the number of students : ");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        printf("No.%d",i+1);
        printf("\tStudent ID : ");
        scanf("\n%d",&id);
        printf("\t\tName : ");
        scanf("\n%[^\n]s",Name);
        printf("\t\tScore : ");
        scanf("\n%d",&score);

        fprintf(fp,"%d\t%s\t%d\n",id,Name,score);

    }

    fclose(fp);
    return 0;
}

