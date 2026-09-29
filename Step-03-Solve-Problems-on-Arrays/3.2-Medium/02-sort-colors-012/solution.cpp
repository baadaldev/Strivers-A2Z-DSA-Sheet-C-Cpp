#include <iostream>
#include <vector>
#include <utility>

void sortColors(std::vector<int>& nums) {
    int low = 0, mid = 0, high = nums.size() - 1;
    while (mid <= high) {
        if (nums[mid] == 0) {
            std::swap(nums[low++], nums[mid++]);
        } else if (nums[mid] == 1) {
            mid++;
        } else {
            std::swap(nums[mid], nums[high--]);
        }
    }
}

int main() {
    std::vector<int> nums = {2, 0, 2, 1, 1, 0};
    sortColors(nums);
    for (int x : nums) std::cout << x << " ";
    std::cout << "\n";
    return 0;
}
