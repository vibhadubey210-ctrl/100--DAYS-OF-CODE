//Use pointer to struct to modify and display data using -> operator.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student {
    char name[50];
    int roll;
    int marks;
};
int main() {
    struct Student *ptr = (struct Student *)malloc(sizeof(struct Student));
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Enter student details (Name Roll Marks): ");
    scanf("%s %d %d", ptr->name, &ptr->roll, &ptr->marks);
    printf("\nModified Data:\n");
    printf("Name: %s | Roll: %d | Marks: %d\n", ptr->name, ptr->roll, ptr->marks)
    free(ptr);
    return 0;
}
