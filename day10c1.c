//Write a program to classify a triangle as Equilateral,Isoceles,or Scalene based on its side lengths.
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter first side of triangle:\n");
    scanf("%d",&a);
    printf("Enter second side of triangle:\n");
    scanf("%d",&b);
    printf("Enter third side of triangle:\n");
    scanf("%d",&c);
    if(a==b&&b==c) 
    {
        printf("The trianfle is Equilateral");
    }
    else if(a==b||b==c||a==c)
    {
        printf("THe triangle is Isosceles");
    }
    else {
        printf("The triangle is Scalene");
    }
    return 0;
}
