#include "header.h"
CONTACT *Create(CONTACT *head)
{
        CONTACT *nu=NULL,*temp=NULL;
        nu=calloc(1,sizeof(CONTACT));
        if(nu==NULL)
        {
                printf("node not created\n");
                return head;
        }
        nu->link=NULL;
        printf("enter name\n");
        scanf("%s",nu->name);
        printf("enter number\n");
        scanf("%s",nu->number[0]);
        nu->num_count=1;
        char ch;
        while(nu->num_count<5)
        {
                printf("add another number(Y/N)\n");
                __fpurge(stdin);
                scanf(" %c",&ch);
                if(ch=='Y' || ch=='y')
                {
                        if(nu->num_count>=5)
                        {
                                printf("maximum 5 numbers allowed\n");
                                break;
                        }
                        printf("enter another number\n");
                        scanf("%s",nu->number[nu->num_count]);
                        nu->num_count++;
                }
                else if(ch=='n' || ch=='N')
                {
                        break;
                }
        }
        nu->email_cnt=0;
         while(nu->addr_cnt<5)
        {
                printf("add a ddress(Y/N)\n");
                __fpurge(stdin);
                scanf(" %c",&ch);
                if(ch=='Y' || ch=='y')
                {
                        printf("enter address\n");
                        scanf("%s",nu->address[nu->addr_cnt]);
                        nu->addr_cnt++;
                }
                else if(ch=='N'|| ch=='n')
                {
                      break;
                }
        }
                if(head==NULL)
                {
                        head=nu;
                }
                else
                {
                        temp=head;
                        while(temp->link)
                        {
                                temp=temp->link;
                        }
                        temp->link=nu;
                }
        return head;
}