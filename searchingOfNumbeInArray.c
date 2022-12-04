/* c program to search in array
-------------------------------
Linar Search
*/
#include<stdio.h>
int main()
{
    int roll[20]={1,2,12,3,4,34,45,56,43,45,8,9,60,23,13,22};
    int sroll, i;
    printf("Enter roll number to search: ");
    scanf("%d",&sroll);
    // code o search roll(linear search)
    for(i=0;i<20;i+=1)
    {
        if(roll[i]==sroll)
        
        break;
    }
    if(i<20)
    printf("%d is available in list at index %d", sroll,i);
    else
    printf("%d is not available in list",sroll);
    return 0;

}