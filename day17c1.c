//Write a program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>
int main(){
    int digit;
    int n;
    int num;
    int arm=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    int original=n;
    printf("Enter the number of digits:\n");
    scanf("%d",&num);
    while(n>0)
     {     
        digit=n%10;
        arm=pow(digit,num)+arm;
        n=n/10;
    }if(original==arm)
{
    printf("The  number  %d is an armstrong number",original);
}   else{
    printf("The number %d is not an armmstong number",original);
}     
return 0;
    
}