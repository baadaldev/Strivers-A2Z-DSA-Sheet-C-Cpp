#include <stdio.h>

void rearrange(int nums[], int n, int ans[]) {
    int pos = 0, neg = 1;
    for (int i = 0; i < n; i++) {
        if (nums[i] > 0) { ans[pos] = nums[i]; pos += 2; }
        else { ans[neg] = nums[i]; neg += 2; }
    }
}
int main() {
    int nums[] = {3, 1, -2, -5, 2, -4}, ans[6];
    rearrange(nums, 6, ans);
    for (int i = 0; i < 6; i++) printf("%d ", ans[i]);
    printf("\n");
    return 0;
}
