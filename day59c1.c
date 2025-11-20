//Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
#include <stdio.h>
int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter k: ");
    scanf("%d", &k);
    int currentSum = 0;
    for(int i = 0; i < k; i++) {
        currentSum += arr[i];
    }
    int maxSum = currentSum;
    for(int i = k; i < n; i++) {
        currentSum = currentSum - arr[i - k] + arr[i];
        if(currentSum > maxSum) {
            maxSum = currentSum;
        }
    }
    printf("%d", maxSum);
    return 0;
}
