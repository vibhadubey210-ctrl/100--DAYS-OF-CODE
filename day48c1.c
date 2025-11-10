//Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100], T[200];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    if (strlen(str1) != strlen(str2)) {
        printf("Not rotation\n");
        return 0;
    }
    strcpy(T, str1);
    strcat(T, str1);
    if (strstr(T, str2) != NULL)
        printf("Rotation\n");
    else
        printf("Not rotation\n");
    return 0;
     }
