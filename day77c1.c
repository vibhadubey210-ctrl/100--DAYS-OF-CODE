//Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *fin, *fout;
    char ch;
    fin = fopen("day71c1.c", "r");
    fout = fopen("output.txt", "w");
    if (fin == NULL || fout == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    while ((ch = fgetc(fin)) != EOF) {
        ch = toupper(ch);
        fputc(ch, fout);
    }
    fclose(fin);
    fclose(fout);
    return 0;
}
