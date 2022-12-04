/* write a c program in which accept any upper case letter and print its lower case letter.*/
#include<stdio.h>
#include<process.h>
int main()
{
    char letter,lc;
    printf(" Enter the any upper case letter");
    scanf("%c",&letter);
    lc=32+letter;
    if(letter>=65&&letter<=90)
    printf(" you have enter the upper case letter is %c and its lower case is %c", letter, lc);
    else 
    printf (" Sorry! You have not entered the right");
    printf(" \n\nThank you");
    system("pause");
    return 0;
}