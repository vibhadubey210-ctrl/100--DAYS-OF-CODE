//Print initials of a name with the surname displayed in full name.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char name[100];
    int len, i, lastSpace = -1;
    printf("Enter full name: ");
    gets(name);  
    len = strlen(name);
    for (i = 0; i < len; i++) {
        if (name[i] == ' ')
            lastSpace = i;
    }
    printf("Output: ");
    if (name[0] != ' ')
        printf("%c.", toupper(name[0]));
    for (i = 0; i < lastSpace; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0')
            printf("%c.", toupper(name[i + 1]));
    }
    if (lastSpace != -1)
        printf(" %s\n", &name[lastSpace + 1]);
    else
        printf("\n");
    return 0;
}
