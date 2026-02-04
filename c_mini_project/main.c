#include"header.h"
int size=sizeof(CONTACT)-sizeof(CONTACT *);
int main()
{
        CONTACT *head=NULL;
        char choice;
        head=SyncFromFile(head);
        while(1)
        {
                printf("C.create P.print D.delete F.find E.edit S.save R.syncfrofile Q.quit\n");
                printf("enter the choice\n");
                __fpurge(stdin);
                scanf("%c",&choice);
                switch(choice)
                {
                        case 'C':head=Create(head);
                                 break;
                        case 'P':Print(head);
                                 break;
                        case 'D':Delete(head);
                                 break;
                        case 'F':Find(head);
                                 break;
                        case 'E':Edit(head);
                                 break;
                        case 'S':Save(head);
                                 break;
                                 /*case 'R':head=SyncFromFile(head);
                                   break;*/
                        case 'Q':exit(0);
                }
                printf("size_main=%d\n",size);
        }
}