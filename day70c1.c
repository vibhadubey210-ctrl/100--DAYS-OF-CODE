//Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
#include <ctype.h>
int main() {
    char str[200];
    int i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    if (str[0] != '\0')
        str[0] = toupper(str[0]);
    for (i = 1; str[i] != '\0'; i++) {
        if (str[i - 1] == ' ') {
            str[i] = toupper(str[i]);
        }
    }

    printf("Output: %s", str);
    return 0;
}
enter a string
