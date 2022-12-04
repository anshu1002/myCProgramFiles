#include<stdio.h>
#define sz 10
int main()
{
    int arr[sz];
    int i;
    for(i=0;i<10;i+=1)
    {
        printf("Enter the number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    // print the number list
    printf("The entered value are:");
    for(i=0;i<10;i+=1)
    printf("\n%d",arr[i]);
    // for reverse order
    printf("\nEnter the reverse order: ");
    for(i=9;i>=0;i-=1)
    {
        
        printf("\n%d",arr[i]);
    }
    for(i=0;i<10;i+=1)arr[i]*=2;

    //print all values(to print all values traverse the list)
    printf("Content of array after twice:");
    for(i=0;i<10;i+=1)
    printf("\n%d",arr[i]);
     
     printf("\n");
    return 0;
}