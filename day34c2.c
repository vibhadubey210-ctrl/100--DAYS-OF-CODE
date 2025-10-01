//Delete an element from an array.
#include <stdio.h>
int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5; 
    int key, pos = 0;
    printf("Enter element to delete: ");
    scanf("%d", &key);
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            pos = i;
            break;
        }
    }
    if(pos == 0) {
        printf("Element not found\n");
        return 0;
    }
    for(int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--; 
    printf("Array after deletion: ");
    for(int i=0;i<n;i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
