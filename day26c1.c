//Write a program to print the following pattern:
#include <stdio.h>

int main() {
    int n = 5;
    int i, j, k;
    for (i = n; i >= 1; i--) {          
        for (j = 1; j < i; j++) {
            printf(" ");
        }
        for (k = i; k <= n; k++) {
            printf("%d", k);
        }
        printf("\n");
    }

    return 0;
}
