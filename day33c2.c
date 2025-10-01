//Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main() {
    int arr[100] = {1, 3, 5, 7,8};
    int n = 5; 
    int key;
    printf("Enter element to insert: ");
    scanf("%d", &key);
    int i;
    for(i = n - 1; (i >= 0 && arr[i] > key); i--) {
        arr[i + 1] = arr[i]; 
    }
    arr[i+1]=key;
    n++; 
    printf("Array after insertion: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
