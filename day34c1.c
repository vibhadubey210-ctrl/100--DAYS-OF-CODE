//Insert an element in an array at a given position.
#include <stdio.h>
int main() {
    int arr[100] = {10, 20, 30, 40, 50}; 
    int n = 5; 
    int pos, key;
    printf("Enter the position to insert: ");
    scanf("%d", &pos);
    printf("Enter the element to insert: ");
    scanf("%d", &key);
    if(pos<1||pos>n+1) {
        printf("Invalid position\n");
        return 0;
    }
    for(int i = n - 1; i >= pos - 1; i--) {
        arr[i + 1] = arr[i];
    }
    arr[pos-1]=key;
    n++;
    printf("Array after insertion: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

