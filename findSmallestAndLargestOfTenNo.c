/* C program to find the largest and smallest of ten numbers, and Sum, Subtraction
 and Multiple of largest and smallest*/
#include<stdio.h>
#include<process.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j,l,s;
    printf(" Enter the no.:");
    scanf("%d",&a);
    printf(" Enter the no.:");
    scanf("%d",&b);
    printf(" Enter the no.:");
    scanf("%d",&c);
    printf(" Enter the no.:");
    scanf("%d",&d);
    printf(" Enter the no.:");
    scanf("%d",&e);
    printf(" Enter the no.:");
    scanf("%d",&f);
    printf(" Enter the no.:");
    scanf("%d",&g);
    printf(" Enter the no.:");
    scanf("%d",&h);
    printf(" Enter the no.:");
    scanf("%d",&i);
    printf(" Enter the no.:");
    scanf("%d",&j);
    // find the largest number
    if(a>b&&a>c&&a>d&&a>e&&a>f&&a>g&&a>h&&a>i&&a>j)
    l=a;
    else if(b>c&&b>d&&b>e&&b>f&&b>g&&b>i&&b>j)
    l=b;
    else if(c>d&&c>e&&c>f&&c>g&&c>h&&c>i&&c>j)
    l=c;
    else if(d>e&&d>f&&d>g&&d>h&&d>i&&d>j)
    l=d;
    else if(e>f&&e>g&&e>h&&e>i&&e>j)
    l=e;
    else if(f>g&&f>h&&f>i&&f>j)
    l=f;
    else if(g>h&&g>i&&g>j)
    l=g;
    else if(h>i&&h>j)
    l=h;
    else if(i>j)
    l=j;
    // find the smallest no.
    if(a<b&&a<c&&a<d&&a<e&&a<f&&a<g&&a<h&&a<i&&a<j)
    s=a;
    else if(b<c&&b<d&&b<e&&b<f&&b<g&&b<i&&b<j)
    s=b;
    else if(c<d&&c<e&&c<f&&c<g&&c<h&&c<i&&c<j)
    s=c;
    else if(d<e&&d<f&&d<g&&d<h&&d<i&&d<j)
    s=d;
    else if(e<f&&e<g&&e<h&&e<i&&e<j)
    s=e;
    else if(f<g&&f<h&&f<i&&f<j)
    s=f;
    else if(g>h&&g>i&&g<j)
    s=g;
    else if(h<i&&h>j)
    s=h;
    else if(i<j)
    s=i;
    else
    s=j;
    printf(" you have entered %d,%d,%d,%d,%d,%d,%d,%d,%d,%d. the largest no. is %d and smallest no. is %d. The sum of largest and smallest no. is %d.",a,b,c,d,e,f,g,h,i,j,l,s,l+s);
    printf(" \n Thank You ");
    system (" pause");
    return 0;

}