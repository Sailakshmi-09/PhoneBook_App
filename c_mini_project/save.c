#include "header.h"
extern int size;
void Save(CONTACT *head)
{
        FILE *fp;
        CONTACT *temp=NULL;
        int i;
        if(head==NULL)
        {
                printf("list is empty\n");
        }
        else
        {
                fp=fopen("con","w");
                if(fp==NULL)
                {
                        printf("file not created");
                        return;
                }
                temp=head;
                while(temp)
                {
                        //fprintf(fp,"%s %d",temp->name,temp->num_count);
                        fwrite(temp,size,1,fp);
                        /*for(i=0;i<temp->num_count;i++)
                        {
                                fprintf(fp,"%s ",temp->number[i]);
                        }
                        for(i=0;i<temp->email_cnt;i++)
                        {
                                fprintf(fp,"%s\n",temp->email[i]);
                        }
                        for(i=0;i<temp->addr_cnt;i++)
                        {
                                fprintf(fp,"%s\n",temp->address[i]);
                        }*/
                //      puts("save");
                        temp=temp->link;
                }
        }
        fclose(fp);
        printf("contacts saves\n");
}