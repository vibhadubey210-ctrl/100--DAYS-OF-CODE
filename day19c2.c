//Write a program to find the sum of digits of a number.
#include <stdio.h>
int main()
{
    int n;
    int sum=0;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    while(n>0)
    {
     int rem=n%10;
     sum=sum+rem;
     n=n/10;
    }
    printf("The sum of number:%d\n",sum);
  return 0;
}