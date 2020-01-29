#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct WordNode
{
    int id;
    char engWord[20];
    char meaning[50];
    struct WordNode * nextWord;
};

struct WordNode * Head=NULL;

void insertNewWord(int f_id,char f_engWord[20],char f_meaning[50])
{
    printf("Inser %d ,%s\n",f_id,f_engWord);
    struct WordNode * newWord;
    newWord = (struct WordNode *)malloc(sizeof(struct WordNode));
    newWord ->id=f_id;
    strcpy(newWord->engWord,f_engWord);
    strcpy(newWord->meaning,f_meaning);
    newWord->nextWord = Head;
    Head = newWord;
}
void listAllWord()
{
    struct WordNode * p = Head;
    if(p==NULL)
    {
        printf("No data \n");
    }
    else
    {
        printf("\nList VOcabulary\n");
        printf("----------------------------\n");
    }


    while(p!=NULL)
    {
        printf("%d\t%s\t%s\n",p->id,p->engWord,p->meaning);
        p = p->nextWord;
    }

}
void insertVocad2File()
{
    FILE *fp = fopen("D:/comsci_vocad.txt","w");
    struct WordNode * p = Head;
    if(p==NULL)
    {
        printf("No data \n");
        exit(1);
    }
    else
    {
        printf("writing file...\n");
    }

    while(p!=NULL)
    {

        fprintf(fp,"%d\t%s\t%s\n",p->id,p->engWord,p->meaning);
        p = p->nextWord;
    }
    printf("Finished.\n");
    fclose(fp);
}

int main()
{
    insertNewWord(1,"computer","electronic device");
    insertNewWord(2,"USB","standradiZed serial computer interface");
    insertNewWord(3,"LAB","network forb shraing resources");
    insertNewWord(4,"Programmer","a person who prepares and tests programs");

    listAllWord();

    insertVocad2File();
    return 0;
}
