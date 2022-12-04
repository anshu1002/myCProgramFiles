#include<stdio.h>
#include<malloc.h>
 
struct Node
{
    char name[30];
    char class[15];
    int roll;
    int hindi;
    int english;
    int maths;
    int science;
    int sst;
    struct Node *next;
};

int main()
{
    struct Node *start=NULL;
    struct Node *tnode, *nnode;
    int choice;
    do
    {
        // print menu
        system("cls");
        printf("\nSingle Linked List Operations\n_________________________________________ ");
        printf("\n1. Insert String at last in Array\n2.Display List\n3.Exit\n__________________________________________");
        printf("\nEnter Your Choice: ");
        scanf("%d",&choice);

    
        switch (choice)
        {
            case 1:/*insertion of string at last */
                //1.create a new node
                nnode=(struct Node*)malloc(sizeof(struct Node));
                // 2. check for node
                // if(nnode==NULL);
                // {
                //     printf("\n Unable to create new node.");
                //     break;
                // }
                // accept new data and put it in data part of new node
                fflush(stdin);
                printf("\nEnter the name: ");
                gets(nnode->name);
                printf("Enter the class: ");
                gets(nnode->class);
                printf("Enter the Roll: ");
                scanf("%3d",&nnode->roll);
                printf("Enter the marks of Hindi: ");
                scanf("%3d",&nnode->hindi);
                printf("Enter the marks of English: ");
                scanf("%3d",&nnode->english);
                printf("Enter the marks of Maths: ");
                scanf("%3d",&nnode->maths);
                printf("Enter the marks of Science: ");
                scanf("%3d",&nnode->science);
                printf("Enter the marks of Social Studies: ");
                scanf("%3d",&nnode->sst);
                nnode->next=NULL;

                // 4. Make new node first if list is empty
                if(start==NULL)
                {
                    start=nnode;
                    nnode=NULL;
                    printf("new node inserted successfully at the end of list");
                    break;
                }
                // 5. Find the address of last node of list 
                tnode=start;
                while (tnode->next!=NULL)
                {
                    tnode=tnode->next;
                }
                //  6. put address of new node in address parts of last node
                tnode->next=nnode;
                tnode=NULL;
                printf("new node inserted succesfully at the end of list.");

                break;
        
            case 2: // display lists
                if(start==NULL)
                {
                    printf("\nList is empty!");
                }
                else
                {
                    printf("\nContents of list \n\t\t\tName\t\t    class roll Hindi English Maths Science SocialStudies\n");
                    tnode=start;
                    
                    while (tnode!=NULL)
                    {
                        printf("%30s  %15s  %4d  %4d  %4d  %5d  %5d  %9d",tnode->name,tnode->class,tnode->roll,tnode->hindi,tnode->english,tnode->maths,tnode->science,tnode->sst);
                        tnode=tnode->next;
                    }
                    
                }
                break;
            case 3://code for exit
                return 0;
            default:
                printf("\n Sorry! You have entered invalid option.");
        }    
        printf("\n");
        system("pause");
    } while (1);
    
}
