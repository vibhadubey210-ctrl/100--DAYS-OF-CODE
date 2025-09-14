//Write a program to input a character and check whether it is an uppercase alphabate lowercase alphabet ,digit,or special character.
#include <stdio.h>
int main()
{
    char ch;

    printf("Enter the character:\n");
    scanf("%c", &ch);

    if(ch >= 'a' && ch <= 'z')
        printf("It is lowercase");
    else if(ch >= 'A' && ch <= 'Z')
        printf("It is uppercase");
    else if(ch >= '0' && ch <= '9')
        printf("It is a digit");
    else
        printf("It is special case");

    return 0;
}