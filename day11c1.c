//Write a program to display the month name and number of days using switch-case for a given month number.
#include <stdio.h>
int main()
{
    int x;
    printf("Enter the number of month\n");
    scanf("%d",&x);
    switch(x)
    {
        case 1:printf("January , 31days");
        break;
        case 2:printf("February , 28days");
        break;
         case 3:printf("March , 31days");
        break;
         case 4:printf("April , 30days");
        break;
         case 5:printf("May , 31days");
        break;
         case 6:printf("June , 30days");
        break;
         case 7:printf("July , 31days");
        break;
         case 8:printf("August , 31days");
        break;
         case 9:printf("September , 30days");
        break;
         case 10:printf("October , 31days");
        break;
         case 11:printf("Nevember , 30days");
        break;
         case 12:printf("December , 31days");
        break;
        default:printf("Invalid"); 
        break;
    }
    return 0;
}