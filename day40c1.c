//Perform diagonal traversal of a matrix.
#include <stdio.h>

int main() {
    int n, m;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    printf("Enter number of columns: ");
    scanf("%d", &m);

    int a[n][m];

    printf("Enter elements of matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Diagonal Traversal:\n");
    for (int k = 0; k < n; k++) {
        int i = k, j = 0;
        while (i >= 0 && j < m) {
            printf("%d ", a[i][j]);
            i--;
            j++;
        }
        printf("\n");
    }
    for (int k = 1; k < m; k++) {
        int i = n - 1, j = k;
        while (i >= 0 && j < m) {
            printf("%d ", a[i][j]);
            i--;
            j++;
        }
        printf("\n");
    }
    return 0;
}
