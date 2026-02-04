#include "header.h"
void Delete(CONTACT *head)
{
        CONTACT *temp=NULL,*prev=NULL;
        char name[20];
        if(head==NULL)
        {
                printf("list is empty\n");
                return;
        }
        printf("enter the name to be delete\n");
        scanf(" %s",name);
        temp=head;
        int found=0;
        while(temp)
        {
                if(strcmp(temp->name,name)==0)
                {
                        CONTACT *del=temp;
                        found=1;
                        if(prev==NULL)
                        {
                                //prev->link=temp->link;
                                head=temp->link;
                                temp=head;
                        }
                        else
                        {
                                //head=temp->link;
                                prev->link=temp->link;
                                temp-temp->link;

                        }
                        free(del);
                        printf("contact deleted\n");
                        continue;
                }
                prev=temp;
                temp=temp->link;
        }
        if(found==0)
        {
        printf("contact not found\n");
        }
}
