//Write a program to swap two numbers without using a third variable..
#include <stdio.h>
int main()
{
int a,b,c;
printf("Enter the value of a and b\n");
scanf("%d%d",&a,&b);
a=a+b;
a=a-b;
a=a-b;
printf("a=%d\n",a);
return 0;
}
