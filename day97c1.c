//Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>
#include <stdlib.h>
struct Date {
    int day;
    int month;
    int year;
};
struct Employee {
    char name[100];
    int id;
    struct Date joining;
};
int main() {
    struct Employee e;
    FILE *fp;
    printf("Enter employee name: ");
    fgets(e.name, sizeof(e.name), stdin);
    // Remove trailing newline
    int i = 0;
    while(e.name[i] != '\0') {
        if(e.name[i] == '\n') {
            e.name[i] = '\0';
            break;
        }
        i++;
    }
    printf("Enter employee ID: ");
    scanf("%d", &e.id);
    printf("Enter joining date (day month year): ");
    scanf("%d %d %d", &e.joining.day, &e.joining.month, &e.joining.year);
    fp = fopen("employee.dat", "wb"); 
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fwrite(&e, sizeof(struct Employee), 1, fp);
    fclose(fp);
    printf("\nEmployee data stored successfully in 'employee.dat'.\n");
    fp = fopen("employee.dat", "rb"); // read binary mode
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    struct Employee readEmp;
    fread(&readEmp, sizeof(struct Employee), 1, fp);
    fclose(fp);
    printf("\nEmployee Details from file:\n");
    printf("Name: %s\n", readEmp.name);
    printf("ID: %d\n", readEmp.id);
    printf("Joining Date: %02d/%02d/%04d\n", 
           readEmp.joining.day, readEmp.joining.month, readEmp.joining.year);
    return 0;
}
