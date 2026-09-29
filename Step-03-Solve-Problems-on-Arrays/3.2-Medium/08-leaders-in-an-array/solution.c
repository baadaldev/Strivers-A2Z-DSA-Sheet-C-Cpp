#include <stdio.h>

void printLeaders(int arr[], int n) {
    int maxFromRight = arr[n - 1];
    printf("%d ", maxFromRight);
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > maxFromRight) {
            maxFromRight = arr[i];
            printf("%d ", maxFromRight);
        }
    }
    printf("\n");
}
int main() {
    int arr[] = {16, 17, 4, 3, 5, 2};
    printLeaders(arr, 6);
    return 0;
}
