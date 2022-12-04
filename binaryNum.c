/* write a program to input decimal number and thier output is binary number.*/
#include<stdio.h>
int main()
{
    int n, r[32], nx, rem, i,c;
    printf("Enter any positive number");
    scanf("%d",&n);
    nx=n;
    c=0;
    while(nx!=0)
    {
        //divide nx by 2 and find the remainder and store in r[c] and increase by 1.
        r[c++]=nx%2;
        //divide the nx by 2 and put the quotient in nx
        nx=nx/2;
    }
    // now c is representing the total numbers of remainder stored in list.
    // print all remainder in reverse order
    printf("\n binary of %d is : ",n);
    for(i=c-1;i>=0;i-=1)
    {
        if(r[i]>=0)
        printf("%d",r[i]);

    }
    printf("\n");
    system("pause");
    return 0;
}