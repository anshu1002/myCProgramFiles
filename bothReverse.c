/* write a c program in which accept any letter in any case and prints its
 reverse letter in english alphabet. EX: A-Z,a-z */
 #include<stdio.h>
#include<process.h>
int main()
{
    char alphabet, reverseLetter ;
    printf("************Welcome*********** ");
    printf(" \nReverse letter of Any CASE of english Alphabet ");
    printf(" \nEnter any alphabet ");
    scanf("%c",&alphabet);
    if(alphabet>=65&&alphabet<=90)
    printf(" you have entered the alphabet is: %c and reverse letter of upper case is %c ",alphabet, reverseLetter=115-alphabet);
    else if(alphabet>=97&&alphabet<=121)
    printf(" you have entered the alphabet is: %c and reverse letter of lower case is %c ",alphabet, reverseLetter=219-alphabet);
    else
    printf(" Sorry! you have not entered the right symbols ");
    printf(" \nThank You \n");
    printf("\n\n");
    system("pause");
    return 0;
}
