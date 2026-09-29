#include <stdio.h>
#include <stdlib.h>

void twoSum(int nums[], int n, int target, int* r1, int* r2) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                *r1 = i; *r2 = j; return;
            }
        }
    }
}
int main() {
    int nums[] = {2, 7, 11, 15}, r1 = -1, r2 = -1;
    twoSum(nums, 4, 9, &r1, &r2);
    printf("Indices: %d, %d\n", r1, r2);
    return 0;
}
