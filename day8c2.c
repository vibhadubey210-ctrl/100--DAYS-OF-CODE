//Write a program to input three numbers and find the largest among then using if-else.
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the first number:\n");
    scanf("%d",&a);
     printf("Enter the second number:\n");
    scanf("%d",&b);
     printf("Enter the third number:\n");
    scanf("%d",&c);
    if(a>b&&a>c)
    {
        printf("First is largest number");
    }
    else if(b>c)

    {
        printf("Second number is largest number");
    }
    else
    {
        printf("Third number is largest number");
    }
    return 0;

}