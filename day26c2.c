//Write a program to print the following pattern:
#include <stdio.h>

int main() {
    int blocks = 5; 
    int i, j;
    for (i = 1; i <= blocks; i++) {
        for (j = 1; j <= i; j++) {
            printf("*\n");
        }
        printf("\n"); 
    }

    return 0;
}
