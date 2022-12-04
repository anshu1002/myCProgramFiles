/* write a c program in which accept any letter and prints its reverse case.*/
#include<stdio.h>
#include<process.h>
int main()
{
    char letter,lc,uc;
    printf(" Enter the any letter: ");
    scanf("%c",&letter);
    if(letter>=65&&letter<=90)
    printf(" you have enter the upper case letter is: %c \nand its lower case is %c", letter, lc=32+letter);
    else if(letter>=97&&letter<=120)
    printf(" you have enter the lower case letter is %c\n and its upper case is %c", letter, uc=letter-32);
    else 
    printf (" Sorry! You have not entered the right");
    printf(" \n\nThank you");
    system("pause");
    return 0;
}