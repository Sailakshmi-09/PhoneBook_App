#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<stdio_ext.h>
typedef struct contact
{
        char name[20];
        char number[5][15];
        int num_count;
        char email[5][50];
        int email_cnt;
        char address[5][50];
        int addr_cnt;
        struct contact *link;
}CONTACT;
//int size=sizeof(CONTACT)-sizeof(CONTACT *);
CONTACT *Create(CONTACT *);
void Print(CONTACT *);
CONTACT *SyncFromFile(CONTACT *);
void Delete(CONTACT *);
void Find(CONTACT *);
void Edit(CONTACT *);
void Save(CONTACT *);
