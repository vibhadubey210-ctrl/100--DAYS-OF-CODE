//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int main()
{
float area,perimeter;
float length,breadth;
printf("Enter the length and breadth of rectangle\n");
scanf("%f%f",&length,&breadth);
area= length*breadth;
perimeter = 2*(length+breadth);
printf("Area of rectangle=%.2f\n",area);
printf("Perimeter of rectangle=%.2f\n",perimeter);
return 0;
}