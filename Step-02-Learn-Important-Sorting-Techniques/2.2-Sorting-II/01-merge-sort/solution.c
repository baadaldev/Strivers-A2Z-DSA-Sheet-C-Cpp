#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int low, int mid, int high) {
    int left = low, right = mid + 1, k = 0;
    int *temp = (int*)malloc((high - low + 1) * sizeof(int));
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) temp[k++] = arr[left++];
        else temp[k++] = arr[right++];
    }
    while (left <= mid) temp[k++] = arr[left++];
    while (right <= high) temp[k++] = arr[right++];
    for (int i = low; i <= high; i++) arr[i] = temp[i - low];
    free(temp);
}

void mergeSort(int arr[], int low, int high) {
    if (low >= high) return;
    int mid = low + (high - low) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
