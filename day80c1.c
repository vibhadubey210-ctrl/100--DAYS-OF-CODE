//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>
int main() {
    FILE *fp;
    char name[50];
    int roll, marks;
    fp = fopen("day55c1.c", "w");
    if (fp == NULL) {
        printf("File can't be opened!\n");
        return 1;
    }
    fprintf(fp, "Asha 101 85\n");
    fprintf(fp, "Ravi 102 92\n");
    fclose(fp);
    fp = fopen("day55c1.c", "r");
    if (fp == NULL) {
        printf("File can't be opened!\n");
        return 1;
    }
    printf("Student Records:\n");
    while (fscanf(fp, "%s %d %d", name, &roll, &marks) != EOF) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }
    fclose(fp);
    return 0;
}
