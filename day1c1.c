//write a program to input two numbers and display their sum....
#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Enter the numbers a and b: ");
    scanf("%d%d", &a, &b);

    c = a + b;   // yaha input ke baad sum karenge

    printf("Sum = %d\n", c);

    return 0;
}