/* single Linked list*/
#include<stdio.h>
#include<malloc.h>
struct Node
{
    float data;
    struct Node *next;
};

int main()
{
    struct Node *start=NULL;
    struct Node *nnode, *tnode;
    float newData;
    int choice;
    do
    {
        // print menu
        system("cls");
        printf("Sinlge Linked List Operations\n===================================================");
        printf("\n1. Insert At last in list \n2. Display List \n3. Exit");
        printf("\n============================================================\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1: /* Code for Insert new node at Last in list */
            //1. create new node
            nnode=(struct Node *)malloc(sizeof(struct Node));
            // 2. Chech for node
            if(nnode==NULL)
            {
                printf("\nUnable to create new Node");
                break;
            }
            // accept new data and put it in data part  of new node
            printf("Enter new Data: ");
            scanf("%f",&newData);
            nnode->data=newData;
            nnode->next=NULL;

            // Make new node first list is empty
            if(start==NULL)
            {
                start=nnode;
                nnode=NULL;
                printf("New Node inserted successfull at the end of list");
                break;
            }
            // find the address of last node
            tnode=start;
            while (tnode->next!=NULL)
            {
                tnode=tnode->next;
            }
            // 6. put the address of new node in address part of last node
                tnode->next=nnode;
                nnode=NULL;
                printf("new node inserted successfully at the end of list");

            break;
              case 2://code for display list
            if(start==NULL)
            {
                printf("\n List is empty!");
            }
            else
            {
                printf("Contents of list:");
                tnode=start;
                while(tnode!=NULL)
                {
                    printf("%f,", tnode->data);
                    tnode=tnode->next;
                }
            }
            break;
            case 3:/* Code for Exit */    
            return 0;
            default:
            printf("\n Sorry! you have entered invalid option");
        }
        printf("\n");
    system("pause");
    } while (1);
    
}