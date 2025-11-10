//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>
int main() {
    char sentence[200], word[50];
    int i = 0, j = 0, len;
    printf("Enter a sentence: ");
    gets(sentence); 
    while (1) {
        if (sentence[i] != ' ' && sentence[i] != '\0') {
            word[j++] = sentence[i];
        } else {
            word[j] = '\0';  
            len = strlen(word);
            for (int k = len - 1; k >= 0; k--)
                printf("%c", word[k]);
            if (sentence[i] == ' ')
                printf(" ");
            j = 0;
        }
        if (sentence[i] == '\0')
            break;
        i++;
    }
    return 0;
     }
