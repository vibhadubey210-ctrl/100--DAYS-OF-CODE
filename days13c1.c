//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>
int main()
{
    int a,b;
    char operation;
    printf("If you want addition enter: A\n");
    printf("If you want subtraction entre: S\n ");
    printf("If you want multipllication enter: M\n");
    printf("If you want division enter: D\n");
    printf("If you want remainder enter: R\n");
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Enter the value of b\n");
    scanf("%d",&b);
    printf("Enter operation you want\n");
    scanf(" %c",&operation);
    switch(operation) {
        case 'A':printf("Sum of the number is :%d",a+b);
        break;
        case 'S':printf("Subtraction of the number is :%d",a-b);
        break;
        case 'M' :printf("Multiplication of the number is :%d",a*b);
        break;
        case 'D' :printf("Division of the number is :%d",a/b);
        break;
        case 'R' :printf("Remainder of the number is :%d",a%b);
        break;
        default :printf("Invaild");

    }
    return 0;
    
}
