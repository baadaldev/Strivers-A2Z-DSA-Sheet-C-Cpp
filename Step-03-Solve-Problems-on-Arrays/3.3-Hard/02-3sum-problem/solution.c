#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a, const void* b) { return (*(int*)a - *(int*)b); }
void threeSum(int nums[], int n) {
    qsort(nums, n, sizeof(int), cmp);
    for (int i = 0; i < n - 2; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        int j = i + 1, k = n - 1;
        while (j < k) {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum == 0) {
                printf("[%d, %d, %d]\n", nums[i], nums[j], nums[k]);
                j++; k--;
                while (j < k && nums[j] == nums[j - 1]) j++;
                while (j < k && nums[k] == nums[k + 1]) k--;
            } else if (sum < 0) j++;
            else k--;
        }
    }
}
int main() {
    int nums[] = {-1, 0, 1, 2, -1, -4};
    threeSum(nums, 6);
    return 0;
}
