//Find the sum of all elements in a matrix.
#include <stdio.h>
int main() {
    int matrix[10][10];
    int rows, cols;
    int sum = 0;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum =sum+matrix[i][j]; 
        }
    }
    printf("Sum of all elements in the matrix is: %d\n", sum);
    return 0;
}
