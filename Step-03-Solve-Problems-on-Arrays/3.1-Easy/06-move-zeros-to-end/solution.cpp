#include <iostream>
#include <vector>
#include <utility>

void moveZeroes(std::vector<int>& nums) {
    int insertPos = 0;
    for (size_t i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            std::swap(nums[insertPos++], nums[i]);
        }
    }
}

int main() {
    std::vector<int> nums = {0, 1, 0, 3, 12};
    moveZeroes(nums);
    for (int x : nums) std::cout << x << " ";
    std::cout << "\n";
    return 0;
}
