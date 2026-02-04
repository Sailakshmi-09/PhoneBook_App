#include "header.h"
void Find(CONTACT *head)
{
        char name[20];
        printf("enter name:\n");
        scanf("%s",name);
        CONTACT *temp=NULL;
        if(head==NULL)
        {
                printf("list is empty\n");
                return;
        }
        temp=head;
        int i;
        int found=0;
        while(temp)
        {
                if(strcmp(temp->name,name)==0)
                {
                        printf("%s ",temp->name);
                        for(i=0;i<temp->num_count;i++)
                        {
                                printf("%d:%s\n",i+1,temp->number[i]);
                        }
                          for(i=0;i<temp->email_cnt;i++)
                          {
                          printf("email=%s\n",temp->email[i]);
                          }
                            for(i=0;i<temp->addr_cnt;i++)
                            {
                            printf("address=%s\n",temp->address[i]);
                            }
                            found=1;
                }
                temp=temp->link;
        }
        if(found==0)
        {
        printf("not found\n");
        }
}