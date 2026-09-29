#include <stdio.h>

int removeDuplicates(int nums[], int n) {
    if (n == 0) return 0;
    int i = 0;
    for (int j = 1; j < n; j++) {
        if (nums[j] != nums[i]) {
            nums[++i] = nums[j];
        }
    }
    return i + 1;
}

int main() {
    int nums[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int k = removeDuplicates(nums, 10);
    printf("Unique count: %d\nElements: ", k);
    for (int i = 0; i < k; i++) printf("%d ", nums[i]);
    printf("\n");
    return 0;
}
