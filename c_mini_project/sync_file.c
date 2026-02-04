#include"header.h"
extern int size;
CONTACT *SyncFromFile(CONTACT *head)
{
        FILE *fp;
        CONTACT *nu=NULL,*temp=NULL;
        CONTACT var;
        fp=fopen("con","r");
        if(fp==NULL)
        {
                printf("file not found\n");
                return head;
        }
        while((fread(&var,size,1,fp))==1)
        {
                nu=calloc(1,sizeof(CONTACT));
                if(nu==NULL)
                {
                        printf("memory allocation failed\n");
                        break;
                }
                //puts("sync");
                int i;
                strcpy(nu->name,var.name);
                nu->num_count=var.num_count;
                nu->email_cnt=var.email_cnt;
                nu->addr_cnt=var.addr_cnt;
                for(i=0;i<var.num_count;i++)
                {
                        strcpy(nu->number[i],var.number[i]);
                }
                for(i=0;i<var.email_cnt;i++)
                {
                        strcpy(nu->email[i],var.email[i]);
                }
                for(i=0;i<var.addr_cnt;i++)
                {
                        strcpy(nu->address[i],var.address[i]);
                }
                nu->link=NULL;
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
        }

                fclose(fp);
                printf("contacts syncs from file successfully\n");
                return head;
}