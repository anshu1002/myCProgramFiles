
/* Write a c program in which date is subtracted*/
#include<stdio.h>
#include<process.h>
int main()
{
    // first date is current date
    int d1, m1, y1, d2, m2, y2, d3, m3, y3, valid;
    printf(" Enter the days: ");
    scanf("%d",&d1);
    printf(" Enter the months: ");
    scanf("%d",&m1);
    printf(" Enter the year: ");
    scanf("%d",&y1);
    
    if(d1>0)
    {
            if(d1<=31)
            {
                if(m1>0)
                { 
                    if(m1<=12)
                    {   
                        if(y1>0)
                        {
                            if(m1==2)
                            {   
                                if(y1%4==0&&y1%100!=0||y1%400==0)
                                {   
                                    if(d1<=29)
                                    valid=1;
                                    else
                                    valid=0;
                                }
                                else if(d1<=28)
                                valid=1;
                                else
                                valid=0;
                            }
                            else if(m1==4||m1==6||m1==9||m1==11)
                            {
                                if(d1<=30)
                                valid=1;
                                else 
                                valid=0;
                            }
                            else
                            valid=1;
                        }
                        else
                        valid=0;
                    }
                    else 
                    valid=0;
                }
                else
                valid=0;
            }
            else
            valid=0;
    }
    else 
    valid=0;
    
        if(valid==1)
        printf(" The date is valid: ");
        else
        {
         printf(" The date is invalid");
            system("pause");
            return 0;
        }
    // Enter the second date (previous date)

        printf(" Enter the days: ");
        scanf("%d",&d2);
        printf(" Enter the months: ");
        scanf("%d",&m2);
        printf(" Enter the year: ");
        scanf("%d",&y2);
        if(d2>0)
        {   
            if(d2<=31)
            {
                if(m2>0)
                {
                    if(m2<=12)
                    {
                        if(y2>0)
                        {
                            if(m2==2)
                            {
                                if(y2%4==0&&y2%100!=0||y2%400==0)
                                {
                                    if(d2<=29)
                                    valid=1;
                                    else
                                    valid=0;
                                }
                                else if(d2<=28)
                                valid=1;
                                else
                                valid=0;
                            }
                            else if(m2==4||m2==6||m2==9||m2==11)
                            {
                                if(d2<=30)
                                valid=1;
                                else 
                                valid=0;
                            }
                            else
                            valid=1;
                        }
                        else
                        valid=0;
                    }
                    else 
                    valid=0;
                }
                else
                valid=0;
            }
            else
            valid=0;
        }
        else
        valid=0;
        if(valid==1)
        printf(" The date is valid: ");
        else
        {
        printf(" The date is invalid");
        system("pause");
        return 0;
        }
        // date subtraction
        //confirm that first date is larger than second date
        if(y2>y1)
        {
            // swap date1 and date2
            d3=d1;
            d1=d2;
            d2=d3;
            m3=m1;
            m1=m2;
            m2=m3;
            y3=y1;
            y1=y2;
            y2=y3;
        }
        else if(y2==y1)
        {
            if(m2>m1)
            {
               d3=d1;
                d1=d2;
                d2=d3;
            m3=m1;
            m1=m2;
            m2=m3;
            y3=y1;
            y1=y2;
            y2=y3; 
            }
            else if(m2==m1)
            {
                if(d2>d1)
                {
                    d3=d1;
            d1=d2;
            d2=d3;
            m3=m1;
            m1=m2;
            m2=m3;
            y3=y1;
            y1=y2;
            y2=y3;
                }
            }
        }
    
    if(d1<d2)
    {
        if(m1-1==2)
        {
            if(y1%4==0&&y1%100!=0||y1%400==0)
            d1=d1+29;
            else
            d1=d1+28;
        }
        else if(m1-1==4||m1-1==6||m1-1==9||m1-1==11)
        d1=d1+30;
        else
        d1=d1+31;
        m1=m1-1;
    }

    if(m1<m2)
    {
    m1=m1+12;
    y1=y1-1;
    }
    
    d3=d1-d2;
     m3=m1-m2;
      y3=y1-y2;
    printf("\n %d day,%dmonths,%d years", d3,m3,y3);
    system("pause");
    return 0;
}