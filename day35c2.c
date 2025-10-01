//Rotate an array to the right by k positions.
#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6, k, i, j;
    int temp[100];

    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);
    k = k % n; 
    for(i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }
    for(i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }
    for(i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
    printf("Array after rotation: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
