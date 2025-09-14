//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main() 
{
int a,b,c;
printf("Enter the number a,b\n");
scanf("%d%d",&a,&b);
c=a+b;
printf("Sum=%d\n",c);
c=a-b;
printf("Diff=%d\n",c);
c=a*b;
printf("Pro=%d\n",c);
c=a/b;
printf("Quo=%d\n",c);
return 0;
}