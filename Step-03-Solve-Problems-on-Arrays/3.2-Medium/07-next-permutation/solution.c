#include <stdio.h>

void reverse(int nums[], int l, int r) {
    while (l < r) {
        int t = nums[l]; nums[l++] = nums[r]; nums[r--] = t;
    }
}
void nextPermutation(int nums[], int n) {
    int idx = -1;
    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] < nums[i + 1]) { idx = i; break; }
    }
    if (idx == -1) { reverse(nums, 0, n - 1); return; }
    for (int i = n - 1; i > idx; i--) {
        if (nums[i] > nums[idx]) {
            int t = nums[i]; nums[i] = nums[idx]; nums[idx] = t;
            break;
        }
    }
    reverse(nums, idx + 1, n - 1);
}
int main() {
    int nums[] = {1, 2, 3};
    nextPermutation(nums, 3);
    for (int i = 0; i < 3; i++) printf("%d ", nums[i]);
    printf("\n");
    return 0;
}
