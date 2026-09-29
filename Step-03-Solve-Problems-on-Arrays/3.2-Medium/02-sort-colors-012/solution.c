#include <stdio.h>

void sortColors(int nums[], int n) {
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high) {
        if (nums[mid] == 0) {
            int temp = nums[low]; nums[low] = nums[mid]; nums[mid] = temp;
            low++; mid++;
        } else if (nums[mid] == 1) {
            mid++;
        } else {
            int temp = nums[mid]; nums[mid] = nums[high]; nums[high] = temp;
            high--;
        }
    }
}

int main() {
    int nums[] = {2, 0, 2, 1, 1, 0};
    sortColors(nums, 6);
    for (int i = 0; i < 6; i++) printf("%d ", nums[i]);
    printf("\n");
    return 0;
}
