//Write a program to check if a number is prime.
#include <stdio.h>
int main(){
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    for(int i=2;i*i<=num;i++)
    {
    if(num%i==0){
        printf("The number %d is not prime number");
    }else{
        printf("The number %d is a prime number");
    }
}


    return 0;
}