#include <stdio.h>
#include <limits.h>

int maxSubArray(int nums[], int n) {
    int maxSoFar = INT_MIN, currSum = 0;
    for (int i = 0; i < n; i++) {
        currSum += nums[i];
        if (currSum > maxSoFar) maxSoFar = currSum;
        if (currSum < 0) currSum = 0;
    }
    return maxSoFar;
}

int main() {
    int nums[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(nums)/sizeof(nums[0]);
    printf("Maximum Subarray Sum: %d\n", maxSubArray(nums, n));
    return 0;
}
