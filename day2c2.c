//Write a program to calculate the area and circumference of a circle given its radius..
#include <stdio.h>
int main()
{
    float area,circumference;
    float r;
    printf("Enter the value of r\n");
    scanf("%f",&r);
    area=3.14*r*r;
    circumference=2*3.14*r;
    printf("Area=%.2f\n",area);
    printf("Circumference=%.2f\n",circumference);
    return 0;
} 