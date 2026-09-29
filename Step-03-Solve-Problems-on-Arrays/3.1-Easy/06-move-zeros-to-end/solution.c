#include <stdio.h>

void moveZeroes(int nums[], int n) {
    int insertPos = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            int temp = nums[insertPos];
            nums[insertPos] = nums[i];
            nums[i] = temp;
            insertPos++;
        }
    }
}

int main() {
    int nums[] = {0, 1, 0, 3, 12};
    int n = sizeof(nums)/sizeof(nums[0]);
    moveZeroes(nums, n);
    for (int i = 0; i < n; i++) printf("%d ", nums[i]);
    printf("\n");
    return 0;
}
