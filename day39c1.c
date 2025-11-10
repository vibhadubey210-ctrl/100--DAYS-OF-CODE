//Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>

int main() {
    int n, i, j, f=1;

    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    int a[n][n];
    int diag[n];  
    printf("Enter elements of matrix:\n");
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        diag[i] = a[i][i];
    }
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if (diag[i] == diag[j]) {
                f=0; 
                break;
            }
        }
    }

    if(f)
        printf("Diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are NOT distinct.\n");

    return 0;
}
