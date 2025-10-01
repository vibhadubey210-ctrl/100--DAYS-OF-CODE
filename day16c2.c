//Write a program to check if a number is a palindrome.
#include <stdio.h>
int main()
{
    int n;
    int digit;
    int pal=0;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    int original=n;
    while(n>0) {
        digit=n%10;
        pal=pal*10+digit;
        n=n/10;
        
    }if(original==pal)
        {
            printf("The number %d is a palindrome number",original);
        }else{
            printf("The number %d is not a palindrome number",original);
        
}return 0;
}
