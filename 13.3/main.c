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
void printStu(struct Students studen)
{
        printf("----------No. %d----------\n",studen.No);
        printf("Student ID \t: %d\n",studen.id);
        printf("Name\t\t: %s\n",studen.Name);
        printf("Score \t\t: %d\n",studen.Score);
}
void inputSut(struct Students pstds[N],int n)
{
    int i;
    for (i=1;i<=n;i++)
    {
        pstds[i].No=i;
        printf("No.%d\t",pstds[i].No);
        printf("Student ID : ");
        scanf("%d",&pstds[i].id);
        printf("\t\tName : ");
        scanf("%s",pstds[i].Name);
        printf("\t\tScore : ");
        scanf("%d",&pstds[i].Score);
    }
}
void search(int searc_id,struct Students pstds[N],int n)
{
    int i=1;
    for (i=1;i<=n;i++)
    {
        if(searc_id==pstds[i].id)
        {
            printf("***Student search***\n");
            printf("----------No. %d----------\n",pstds[i].No);
            printf("Student ID \t: %d\n",pstds[i].id);
            printf("Name\t\t: %s\n",pstds[i].Name);
            printf("Score \t\t: %d\n",pstds[i].Score);
        }
    }
    printf("!!!Student not found!!!\n");
}
int main()
{
    int Key_id;
    char con;
    int i=1,n;
    printf("Enter the number of students : ");
    scanf("%d",&n);
    struct Students studen[N];
    inputSut(studen,n);
    printf("===========Students==========\n");
    for(i=1;i<=n;i++)
    {
        printStu(studen[i]);
    }
    printf("=======Students search======\n");
    do{printf("Enter Student ID :");
    scanf("%d",&Key_id);
    search(Key_id,studen,n);
    printf("Do you want to continue?(y/n)");
    scanf("\n%c",&con);
    }while(con == 'Y'||con=='y');


    return 0;
}
