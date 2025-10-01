//Search in a sorted array using binary search.
#include <stdio.h>
int binarySearch(int arr[], int n, int k) {
    int low = 0, high = n - 1;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(arr[mid] == k)
            return mid; 
        else if(arr[mid] < k)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1; 
}
int main() {
    int arr[] = {1, 3, 5, 7, 9, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;
    printf("Enter element to search: ");
    scanf("%d",&k);
    int result=binarySearch(arr,n,k);
    if(result!=-1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");
    return 0;
}
