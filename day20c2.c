//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n in from binary number\n");
    scanf("%d",&n);
    while(n>0)
    {
        int a=n%10;
        if(a==1)
        {
            printf("0");
        }
        else{
            printf("1");
        }
    
    n=n/10;
    }

        return 0;
    
}