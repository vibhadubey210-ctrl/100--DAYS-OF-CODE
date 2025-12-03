//Return a structure containing top student's details from a function.
#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    int marks;
};
struct Student getTopStudent(struct Student s[], int n) {
    int i, maxIndex = 0;
    for (i = 1; i < n; i++) {
        if (s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }
    return s[maxIndex];   
}
int main() {
    int n, i;
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
    struct Student top = getTopStudent(s, n);
    printf("\nTop Student: %s | Roll: %d | Marks: %d\n",
           top.name, top.roll, top.marks);
    return 0;
}
