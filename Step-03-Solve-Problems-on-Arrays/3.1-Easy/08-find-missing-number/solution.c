#include <stdio.h>

int missingNumber(int nums[], int n) {
    int xorVal = 0;
    for (int i = 0; i < n; i++) xorVal ^= nums[i] ^ (i + 1);
    return xorVal;
}

int main() {
    int nums[] = {3, 0, 1};
    printf("Missing: %d\n", missingNumber(nums, 3));
    return 0;
}
