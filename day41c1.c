//Count characters in a string without using built-in length functions.
#include <stdio.h>
int my_strlen(char str[])
{
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}
int main() {
    char str[] = "Hello";
    printf("Length of '%s' = %d\n", str, my_strlen(str));
    return 0;
}


