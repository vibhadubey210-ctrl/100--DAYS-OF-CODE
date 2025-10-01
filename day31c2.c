//Reverse an array without taking extra space.
#include <stdio.h>
int main() {
    int n, i, rev;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n / 2; i++) {
        rev=arr[i];
        arr[i]=arr[n - i - 1];
        arr[n-i-1]=rev;
    }
    printf("Reversed array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
