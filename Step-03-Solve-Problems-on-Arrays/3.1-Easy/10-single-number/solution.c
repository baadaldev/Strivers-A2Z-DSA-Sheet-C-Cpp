#include <stdio.h>

int singleNumber(int nums[], int n) {
    int ans = 0;
    for (int i = 0; i < n; i++) ans ^= nums[i];
    return ans;
}

int main() {
    int nums[] = {4, 1, 2, 1, 2};
    printf("Single number: %d\n", singleNumber(nums, 5));
    return 0;
}
