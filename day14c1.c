//Write a program to print the sum of the first n odd numbers.
#include <stdio.h>
int main()
{
    int sum=0;
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        if(i%2!=0) 
        {
        sum=sum+i;
        }
    }
        printf("Sum of first odd numbers is :  %d",sum);
        
    
    return 0;
    
}