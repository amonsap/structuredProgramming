#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 20
struct Students
{
    int No;
    int id;
    char Name[20];
    int Score;
};
int main()
{
    int i=1,n;
    printf("Enter the number of students : ");
    scanf("%d",&n);
    struct Students studen[N];

    for (i=1;i<=n;i++)
    {
        studen[i].No=i;
        printf("No.%d\t",studen[i].No);
        printf("Student ID : ");
        scanf("%d",&studen[i].id);
        printf("\t\tName : ");
        scanf("%s",studen[i].Name);
        printf("\t\tScore : ");
        scanf("%d",&studen[i].Score);
    }
    printf("==========Students=========\n");
    for(i=1;i<=n;i++)
    {
        printf("----------No. %d----------\n",studen[i].No);
        printf("Student ID \t: %d\n",studen[i].id);
        printf("Name\t\t: %s\n",studen[i].Name);
        printf("Score \t\t: %d\n",studen[i].Score);
    }

    return 0;
}
