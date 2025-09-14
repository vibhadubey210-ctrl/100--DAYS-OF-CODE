//Write a program to find the roots of a quadratic and categorize them.
#include <stdio.h>
#include <math.h>
int main()  {
    int a,b,c;
    printf("Enter coefficient of x^2 : \n");
    scanf("%d",&a);
    printf("Enter coefficient of x :  \n ");
    scanf("%d",&b);
    printf("Enter the constant value in the equation:");
    scanf("%d",&c);
    int root1=(-b+sqrt(b*b-4*a*c))/2*a;
    int root2=(-b-sqrt(b*b-4*a*c))/2*a; 
    if(b*b-4*a*c>0) 
    {
        printf("Roots are real and distinct:%d ,%d",root1,root2);
    }
    else if(b*b-4*a*c==0)
    {
        printf("Roots are real and same : %d,%d", root1,root2);
    }
    else {
        printf("Roots are complex.");
    } 
    return 0;

}