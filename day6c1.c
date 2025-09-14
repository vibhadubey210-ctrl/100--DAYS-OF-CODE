//Write a program to input an integer and check wheater it is even or odd using if-else.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("This is even number");
    }
    else
    {
        printf("This is odd number");
    }
    return 0;
}