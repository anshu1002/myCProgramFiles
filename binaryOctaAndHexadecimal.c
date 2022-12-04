#include<stdio.h>
int main()
{
    int n,m, r[32], nx, rem, i,c,d;
    printf("Enter first positive number : ");
    scanf("%d",&n);

    printf("Enter the second positive number : ");
    scanf("%d",&m);

    while(n<=m)
    {
        {
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
            printf("\nThe Binary of %d is : ",n);
            for(i=c-1;i>=0;i-=1)
            {
                if(r[i]>=0)
                printf("%d",r[i]);

            }

            // to find octal number
            nx=n;
            c=0;
            while(nx!=0)
                {
                    r[c++]=nx%8;
                    nx=nx/8;
                }
                printf("\nThe Octa number of %d is: ",n);
                for(i=c-1;i>=0;i-=1)
                {
                    printf("%d",r[i]);
                }
                
                // to find hexadecimal
                nx=n;
                c=0;
            while(nx!=0)
                {
                    r[c++]=nx%16;
                    nx=nx/16;

                }
            printf("\nThe Hexadecimal of %d is ",n);
            for(i=c-1;i>=0;i-=1)
                {
                    if(r[i]>=10)
                    printf("%c",r[i]+55);
                    else
                    printf("%d",r[i]);
                }
        }       
        n+=1; 
        printf("\n\n");
    }
    printf("\n");
    system("pause");
    return 0;
}