//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
#include <stdio.h>
#include <string.h>
int main() {
    char src[256], dest[256];
    FILE *fsrc = NULL, *fdest = NULL;
    int ch;
    printf("Enter source filename: ");
    if (fgets(src, sizeof(src), stdin) == NULL) {
        printf("Input error.\n");
        return 1;
    }
    src[strcspn(src, "\n")] = '\0'; 
    printf("Enter destination filename: ");
    if (fgets(dest, sizeof(dest), stdin) == NULL) {
        printf("Input error.\n");
        return 1;
    }
    dest[strcspn(dest, "\n")] = '\0'; 
    fsrc = fopen(src, "r");
    if (fsrc == NULL) {
        printf("Error! Could not open source file '%s'\n", src);
        return 1;
    }
    fdest = fopen(dest, "w");
    if (fdest == NULL) {
        printf("Error! Could not open/create destination file '%s'\n", dest);
        fclose(fsrc);
        return 1;
    }
    while ((ch = fgetc(fsrc)) != EOF) {
        fputc(ch, fdest);
    }
    fclose(fsrc);
    fclose(fdest);
    printf("File copied successfully to %s\n", dest);
    return 0;
}
