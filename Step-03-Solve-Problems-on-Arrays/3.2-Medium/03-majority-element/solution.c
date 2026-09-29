#include <stdio.h>

int majorityElement(int nums[], int n) {
    int candidate = nums[0], count = 0;
    for (int i = 0; i < n; i++) {
        if (count == 0) candidate = nums[i];
        count += (nums[i] == candidate) ? 1 : -1;
    }
    return candidate;
}

int main() {
    int nums[] = {2, 2, 1, 1, 1, 2, 2};
    printf("Majority Element: %d\n", majorityElement(nums, 7));
    return 0;
}
