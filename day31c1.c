//Search for an element in an array using linear search.
#include <stdio.h>
int main() {
    int n, i, k;
    int search= 0; 

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &k);
    for (i = 0; i < n; i++) {
        if (arr[i]== k) {
            search= 1;
            break;  
        }
    }
    if (search)
        printf("%d is found at position %d.\n", k, i+1); 
            else
        printf("%d is not found in the array.\n", k);
    return 0;
}
