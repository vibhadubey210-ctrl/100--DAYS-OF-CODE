//Write a program to find the LCM of two numbers.
#include <stdio.h>
int main()
{
    int n1;
    int hcf=1;
    int n2;
    printf("Enter the value of n1 and n2\n");
    scanf("%d%d",&n1,&n2);
    for(int i=1;i<=(n1<n2?n1:n2);i++)
    {
        if(n1%i==0&&n2%i==0){
        hcf=i;
    }
    }
    int lcm=(n1*n2)/hcf;
    printf("LCM of the two numbers is: %d\n",n1,n2,lcm);
    return 0;
}