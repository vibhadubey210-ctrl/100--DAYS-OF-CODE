//Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria ..
//90-100:Grade A
//80-89: Grade B
//70-79:Grade C
//60-69:Grade D
// below 60:Grade F.
#include <stdio.h>
int main()
{
    int p;
    printf("Enter the percentage : \n");
    scanf("%d",&p);
    if(p>90 && p<=100) {
        printf("Grade A");
    }
    else if(p>80 && p<=89) {
        printf("Grade B");
    }
    else if(p>70 && p<=79) {
        printf("Grade C");
    }
    else if(p>60 && p<=69) {
        printf("Grade D");
    }
    else {
        printf("Fail");
    }
    return 0;
}