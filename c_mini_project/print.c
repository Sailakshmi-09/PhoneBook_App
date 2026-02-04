#include "header.h"
void Print(CONTACT *ptr)
{
        CONTACT *temp=NULL;
        if(ptr==NULL)
        {
                printf("list is empty\n");
                return;
        }
        temp=ptr;
        int i;
        while(temp)
        {
                printf("%s\n",temp->name);
                for(i=0;i<temp->num_count;i++)
                {
                        printf("phone %d:%s\n",i+1,temp->number[i]);
                }
                for(i=0;i<temp->email_cnt;i++)
                {
                printf("email=%s\n",temp->email[i]);
                }
                for(i=0;i<temp->addr_cnt;i++)
                {
                printf("address=%s\n",temp->address[i]);
                }
                temp=temp->link;
        }
}
