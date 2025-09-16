//Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main()
{
    float SP,CP;
    printf("Enter the cost price\n");
    scanf("%f",&CP);
    printf("Enter the selling price\n");
    scanf("%f",&SP);
    float profitper= ((SP-CP)/CP)*100;
    float lossper=  ((CP-SP)/SP)*100;
    if(SP>CP) {
        printf("profit percentage is:%.2f",profitper);
    }
 else if(CP>SP) {
        printf("loss percentage is:%.2f",lossper);
    }
    else {
        printf("NO loss NO profit");
    }
    return 0;

}
