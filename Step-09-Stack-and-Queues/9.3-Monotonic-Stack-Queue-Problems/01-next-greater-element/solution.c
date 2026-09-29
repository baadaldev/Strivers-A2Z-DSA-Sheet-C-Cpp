#include <stdio.h>

void nextGreater(int arr[], int n, int nge[]) {
    int stack[100], top = -1;
    for (int i = n - 1; i >= 0; i--) {
        while (top >= 0 && stack[top] <= arr[i]) top--;
        nge[i] = (top == -1) ? -1 : stack[top];
        stack[++top] = arr[i];
    }
}
int main() {
    int arr[] = {4, 5, 2, 25}, nge[4];
    nextGreater(arr, 4, nge);
    for (int i = 0; i < 4; i++) printf("%d -> %d\n", arr[i], nge[i]);
    return 0;
}
