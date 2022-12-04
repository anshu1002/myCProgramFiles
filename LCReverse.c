/* Write a c program in which accept any lower case letter and 
print its reverese letter in english alphabet.Ex: A-z*/
#include<stdio.h>
#include<process.h>
int main()
{
    char alphabet, reverseLetter ;
    printf("************Welcome*********** ");
    printf(" \nReverse letter of LOWER CASE of english Alphabet ");
    printf(" \nEnter any alphabet ");
    scanf("%c",&alphabet);
    reverseLetter=219-alphabet;
    if(alphabet>=97&&alphabet<=121)
    printf(" you have entered the %c alphabet is and its reverse letter is %c",alphabet, reverseLetter);
    else
    printf(" sorry! you have not entered the right smbol ");
    printf(" \nThank You \n");
    printf("\n\n");
    system("pause");
    return 0;
}
