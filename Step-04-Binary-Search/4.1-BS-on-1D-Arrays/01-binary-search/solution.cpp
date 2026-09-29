#include <iostream>
#include <vector>

int search(const std::vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) return mid;
        else if (nums[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main() {
    std::vector<int> nums = {-1, 0, 3, 5, 9, 12};
    std::cout << "Index of 9: " << search(nums, 9) << std::endl;
    return 0;
}
