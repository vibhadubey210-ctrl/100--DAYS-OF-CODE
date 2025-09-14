//Write a program to calculate simple and compound interest for given principal ,rate and time ..
#include <stdio.h>
#include <math.h>
int main()
{
    float p,r,t;
    printf("Enter Principal value\n");
    scanf("%f",&p);
    printf("Enter Rate value\n");
    scanf("%f",&r);
    printf("Enter time value\n");
    scanf("%f",&t);
    float si=(p*r*t)/100;
    float ci=p*(pow(1+r/100,t)-1);
    printf("The simple interest is:%f\n",si);
    printf("The compound interest is:%f\n",ci);
    return 0;
    
}