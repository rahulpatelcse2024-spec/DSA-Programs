#include <stdio.h>
int bisearch(int arr[], int low, int high, int t) {
    if (low <= high) {
        int mid = (low +high)/ 2;
        if (arr[mid] == t) {
            return mid;
        }
        if (arr[mid] > t) {
            return bisearch(arr,low, mid - 1, t);
        }
        return bisearch(arr,mid+1,high,t);
    }
    return -1;
}
void main() {
    int sortedArray[] = {1,2,3,4,5};
    int n = 5;
    int target;
    printf("Sorted Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", sortedArray[i]);
    }
    target = 5;
    printf("\nSearching for: %d\n", target);
    int result1 = bisearch(sortedArray, 0, n - 1, target);
    if (result1 == -1) {
        printf("Result: Element not found in the array");
    } else {
        printf("Result: Element found at index %d", result1);
    }target = 6;
    printf("\nSearching for: %d\n", target);
    int result2 = bisearch(sortedArray, 0, n - 1, target);
    if (result2 == -1) {
        printf("Result: Element not found in the array");
    } else {
        printf("Result: Element found at index %d", result2);
    }
}

