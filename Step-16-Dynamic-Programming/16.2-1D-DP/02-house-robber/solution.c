#include <stdio.h>

int max(int a, int b) { return a > b ? a : b; }
int rob(int nums[], int n) {
    if (n == 0) return 0;
    if (n == 1) return nums[0];
    int prev2 = 0, prev1 = nums[0];
    for (int i = 1; i < n; i++) {
        int take = nums[i] + prev2;
        int notTake = prev1;
        int cur = max(take, notTake);
        prev2 = prev1;
        prev1 = cur;
    }
    return prev1;
}
int main() {
    int nums[] = {2, 7, 9, 3, 1};
    printf("Max robbed: %d\n", rob(nums, 5));
    return 0;
}
