#include"header.h"
void Edit(CONTACT *head)
{
        char name[20];
        char ch;
        printf("enter name to be edit\n");
        scanf("%s",name);
        CONTACT *temp=NULL;
        int found=0;
        if(head==NULL)
        {
                printf("list is empty\n");
        }
        else
        {
                temp=head;
                while(temp)
                {
                        if(strcmp(temp->name,name)==0)
                        {
                                found=1;
                                printf("edit contact\n");
                                printf("add name(Y/N)\n");
                                scanf(" %c",&ch);
                                if(ch=='Y' || ch=='y')
                                {
                                printf("enter new name\n");
                                scanf("%s",temp->name);
                                }
                                printf("add number(Y/N)\n");
                                scanf(" %c",&ch);
                                if((ch=='Y' || ch=='y') && (temp->num_count<5))
                                {
                                        printf("add new number\n");
                                        scanf("%s",temp->number[temp->num_count]);
                                        temp->num_count++;
                                }
                                printf("add email(Y/N)\n");
                                scanf(" %c",&ch);
                                if((ch=='Y' || ch=='y') && (temp->email_cnt<5))
                                {
                                        printf("add new email\n");
                                        scanf("%s",temp->email[temp->email_cnt]);
                                        temp->email_cnt++;
                                }
                                printf("add address(Y/N)\n");
                                scanf(" %c",&ch);
                                if(ch=='Y' || ch=='y')
                                {
                                        printf("add new address\n");
                                        scanf("%s",temp->address[temp->addr_cnt]);
                                        temp->addr_cnt++;
                                }
                                printf("contact updated\n");
                                return;
                        }
                        temp=temp->link;
                }
                if(found==0)
                {
                printf("contact not found\n");
                }
        }
}
