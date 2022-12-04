/* C program that will accept the month number and print the month name*/
#include<stdio.h>
#include<process.h>
int main()
{
    int mn;
    printf(" ******* WELCOME********");
    printf("  \n          MONTH NAME           ");
    printf(" \n Please Enter the month number");
    scanf("%d",&mn);
    if(mn==1)
    printf(" JANUARY ");
    else if(mn==2)
    printf("FEBRUARY ");
    else if(mn==3)
    printf(" MARCH ");
    else if(mn==4)
    printf(" APRIL");
    else if(mn==5)
    printf(" MAY ");
    else if(mn==6)
    printf(" JUNE ");
    else if(mn==7)
    printf(" JULY ");
    else if(mn==8)
    printf(" AUGUST ");
    else if(mn==9)
    printf(" SEPTEMBER ");
    else if(mn==10)
    printf(" OCTOBER ");
    else if(mn==11)
    printf(" NOVEMBER ");
    else if(mn==12)
    printf("DECEMBER");
    else
    printf(" SORRY! not a valid number ");
    printf("\n");
    printf("Thank You\n ");
    system ("pause");
    return 0;
}