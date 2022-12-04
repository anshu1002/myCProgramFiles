/* write a c program in which accept any 30 number in an array. 
again accept an another number and find the frequency of last entered number in list
*/
#include<stdio.h>
int main()
{
    int roll[20]={0};
    int sroll, i,frequency;
    for(i=0;i<20;i+=1)
    {
        printf("Enter any  number %d: ",i+1);
        scanf("%d",&roll[i]);   
    }
    printf("Enter roll number to search: ");
    scanf("%d",&sroll);
    system("cls");
    // code to search roll(linear search)
    printf("All Entered no. are");
    for(i=0;i<20;i+=1)
    {
        printf("%d\n",roll[i]);
        if(i<20-2)
        printf(",");
        else if(i<20-1)
        printf("and");
    }    
    frequency=0;
    for(i=0;i<20;i+=1)

    {
        if(roll[i]==sroll)
        frequency+=1;
    }
    printf("\n%d is available in list and their frequency is %d ", sroll,frequency);
    return 0;

}