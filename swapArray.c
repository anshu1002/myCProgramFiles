/* write a c program in which create 10 element integer array and accept the data from user in
that array, print the all data of array on the screen. swipe the smallest and largest
value present in the array and print the array again.*/
#include<stdio.h>
#define sz 10
int main()
{
    int arr[sz]={0};
    int i, largestPosition,smallestPosition;
    //code for input
    for(i=0;i<sz;i+=1)
    {
        printf("Enter the number %d: ",i);
        scanf("%d",&arr[i]);
        
    }
    // find the position of samllest and largest number position.
    smallestPosition=0;
    largestPosition=0;
    
    for(i=1;i<sz;i+=1)
    {
        if(arr[i]>arr[largestPosition])
        largestPosition=i;
        else if(arr[i]<arr[smallestPosition])
        smallestPosition=i;
    }
    // content array before swap

    printf("\n conntent of array before swap:");
    for(i=0;i<sz;i+=1)    
    {
        printf("%d, ",arr[i]);
    }
    printf("\nthe largest no. is %d of %d index and smallest no. is %d of %d index",arr[largestPosition],largestPosition,arr[smallestPosition],smallestPosition);
    // swapping of number
    i=arr[smallestPosition];
   arr[smallestPosition]=arr[largestPosition];
   arr[largestPosition]=i;
   
   printf("\n conntent of array after swap:");
    for(i=0;i<sz;i+=1)    
    {
        printf("\n%d",arr[i]);
    }
   
    return 0;
}