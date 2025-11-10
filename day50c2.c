//Print all sub-strings of a string.
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int len, i, j, k;
    printf("Enter a string: ");
    gets(str);  
    len = strlen(str);
    printf("All substrings are:\n");
    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
          for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            if (i != len - 1 || j != len - 1)
                printf(",");  
        }
    }
    printf("\n");
    return 0;
}
