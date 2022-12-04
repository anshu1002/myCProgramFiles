#include<stdio.h>
int main()
{
    int n,m, r[32], nx, rem, i,c,d;
    printf("Enter first positive number: ");
    scanf("%d",&n);
    printf("Enter second positive number: ");
    scanf("%d",&m);
    while(n<=m)
    {
            nx=n;
            c=0;
            printf("\n The Binary of %d is : ",n);
            while(nx!=0)
            {
                //divide nx by 2 and find the remainder and store in r[c] and increase by 1.
                r[c++]=nx%2;
                //divide the nx by 2 and put the quotient in nx
                nx=nx/2;
            }
            // now c is representing the total numbers of remainder stored in list.
            // print all remainder in reverse order
            
            for(i=c-1;i>=0;i-=1)
            {
                if(r[i]>=0)
                printf("%d",r[i]);

            }
            n+=1;
    }        

            // to find octal number
    while(n<=m)
    {
            nx=n;
            c=0;
            printf("\n The Octal number of %d is: ",n);
            while(nx!=0)
                {
                    r[c++]=nx%8;
                    nx=nx/8;
                }
                
                for(i=c-1;i>=0;i-=1)
                {
                    printf("%d",r[i]);
                }
                n+=1;
    }        

                // to find hexadecimal
    {
        while (n<=m)
        
                nx=n;
                c=0;
                printf("\nThe Hexadecimal of %d is ",n);
            while(nx!=0)
                {
                    r[c++]=nx%16;
                    nx=nx/16;

                }
            
            for(i=c-1;i>=0;i-=1)
                {
                    if(r[i]>=10)
                    printf("%c",r[i]+55);
                    else
                    printf("%d",r[i]);
                }
                n+=1;
    }        
        
    
    printf("\n");
    system("pause");
    return 0;
}