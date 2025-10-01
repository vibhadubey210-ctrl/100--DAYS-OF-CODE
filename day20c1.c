//Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main()
{
    int num;
    int pro=1;
    int digit;
    
    printf("Enter the number\n");
    scanf("%d",&num);
    while(num>0){
    int digit = num%10;
     if(num%2!=0){
        pro=digit*pro;

     }   
     num=num/10;
        }
printf("The product is:%d",pro);
return 0;
        
    }
