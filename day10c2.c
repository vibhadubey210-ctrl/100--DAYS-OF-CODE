//Write a program to display the day of the week based on a number (1–7) using switch-case.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the days number\n");
    scanf("%d",&num);
    switch(num)
    {
        case 1:printf("Monday");
        break;
        case 2:printf("Tuesday");
        break;
        case 3:printf("Wedneshday");
        break;
        case 4:printf("Thursday");
        break;
        case 5:printf("Friday");
        break;
        case 6:printf("Saturday");
        break;
        case 7:printf("Sunday");
        break;
        default:printf("Invalid");
        break;

    }
       return 0;
}