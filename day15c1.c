//Write a program to calculate the factorial of a number.
#include <stdio.h>
int main(){
    int a;
    printf("Enter number : \n");
    scanf("%d",&a);
    long factorial=1;
    if(a<=0){
        printf("Factorial cannot be found.");
    }else{
    for(int i=1;i<=a;i++){
        factorial=factorial*i;
    }printf("Factorial of the number is : %d",factorial);
}
return 0;
}