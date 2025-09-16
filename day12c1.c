//Write a program to calculate library fine based on late days as follows:
//First 5 days late: ₹2/day
//Next 5 days late: ₹4/day
//Next 20 days days late: ₹6/day
//More than 30 days: Membership Cancelled.
#include <stdio.h>
int main()
{
    int days;
    int Fine;
    printf("Enter the late days\n");
    scanf("%d",&days); 
    if(days<=5)
    {
         Fine= days*2;
        printf("Fine = Rs.%d:",Fine);
    }
    else if(days<=10)
    {
        Fine=5*2+(days-5)*4;
        printf("Fine = Rs.%d:",Fine);
    }
    else if(days<=30)
    {
        Fine=5*2+5*4+(days-10)*6;
        printf("Fine = Rs.%d:",Fine);
    }
    else 
    {
        printf("Membersip cancle");
    }
    return 0;

}

