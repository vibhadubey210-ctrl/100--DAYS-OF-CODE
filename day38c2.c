//Check if a matrix is symmetric.
#include <stdio.h>
int main() {
    int matrix[10][10];
    int n;
    int Symmetric = 1; 
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(matrix[i][j] != matrix[j][i]) {
                Symmetric = 0; 
                break;
            }
        }
        if(!Symmetric) break;
    }

    if(Symmetric)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");

    return 0;
}
