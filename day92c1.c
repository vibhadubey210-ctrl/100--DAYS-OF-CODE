//Store details of 5 students in an array of structures and print all.
#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    int marks;
};
int main() {
    struct Student s[5];
    int i;
    printf("Enter details of 5 students:\n\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d Name: ", i + 1);
        scanf("%s", s[i].name);
        printf("Student %d Roll No: ", i + 1);
        scanf("%d", &s[i].roll);
        printf("Student %d Marks: ", i + 1);
        scanf("%d", &s[i].marks);
        printf("\n");
    }
    printf("Name\t\tRoll\tMarks\n");
    for (i = 0; i < 5; i++) {
        printf("%s\t\t%d\t%d\n", s[i].name, s[i].roll, s[i].marks);
    }
    return 0;
}

