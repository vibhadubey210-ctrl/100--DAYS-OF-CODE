//Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    int sum=(n*(n+1))/2;
    printf("Sum=%d",sum);
    return 0;
    
}