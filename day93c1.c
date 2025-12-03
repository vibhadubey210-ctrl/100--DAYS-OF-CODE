//Find and print the student with the highest marks.
#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    int marks;
};
int main() {
    int n, i, maxIndex = 0;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student s[n];
    for (i = 0; i < n; i++) {
        printf("\nStudent %d Name: ", i + 1);
        scanf("%s", s[i].name);
        printf("Student %d Roll No: ", i + 1);
        scanf("%d", &s[i].roll);
        printf("Student %d Marks: ", i + 1);
        scanf("%d", &s[i].marks);
    }
    for (i = 1; i < n; i++) {
        if (s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }
    printf("\nTopper: %s (Marks: %d)\n", s[maxIndex].name, s[maxIndex].marks);
    return 0;
}
