 //Take two structs as input and check if they are identical.
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int id;
    int marks;
};

// Function to compare two students
int isSame(struct Student s1, struct Student s2) {
    // Compare name, id, and marks
    if (strcmp(s1.name, s2.name) == 0 && s1.id == s2.id && s1.marks == s2.marks)
        return 1; // same
    else
       return 0; // not same
}
int main() {
    struct Student s1, s2;
    printf("Enter Student1 details (Name ID Marks): ");
    scanf("%s %d %d", s1.name, &s1.id, &s1.marks);
    printf("Enter Student2 details (Name ID Marks): ");
    scanf("%s %d %d", s2.name, &s2.id, &s2.marks);
    if (isSame(s1, s2))
        printf("Same\n");
    else
        printf("Not Same\n");
    return 0;
}
