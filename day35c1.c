//Find the second largest element in an array.
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 35, 50, 40};
    int n = 5;
    int largest = arr[0];
    int secondLargest = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    printf("Second largest element is %d\n", secondLargest);
    return 0;
}
