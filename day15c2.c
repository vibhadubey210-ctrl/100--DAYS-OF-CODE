//Write a program to reverse a given numbere.
#include <stdio.h>

int main() {
    int n,rev=0,digit;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    while(n>0)
    {
    digit=n%10;
    rev=rev*10+digit;
    n=n/10;
    }
    printf("The Reversse number is: %d",rev);

    
    return 0;
}