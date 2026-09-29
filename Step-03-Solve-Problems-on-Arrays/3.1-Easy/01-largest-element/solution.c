#include <stdio.h>

int findLargest(int arr[], int n) {
    int maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) maxVal = arr[i];
    }
    return maxVal;
}

int main() {
    int arr[] = {2, 5, 1, 3, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Largest element: %d\n", findLargest(arr, n));
    return 0;
}
