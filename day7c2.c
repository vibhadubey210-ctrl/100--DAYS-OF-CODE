//Write  a program to input a character and check wheather it is a vowle or consonant using if-else..
#include <stdio.h>
int main()
{
    char chr;
    printf("Enter the character\n");
    scanf("%c",&chr);
    if(chr=='a'||chr=='i'||chr=='e'||chr=='o'||chr=='u'||chr=='A'||chr=='I'||chr=='E'||chr=='O'||chr=='U')
    {
        printf("It is VOwle");
    }
    else 
    {
        printf("It is a constant");
    }
    return 0;
}