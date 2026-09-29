#include <iostream>
#include <vector>

int majorityElement(const std::vector<int>& nums) {
    int candidate = nums[0], count = 0;
    for (int x : nums) {
        if (count == 0) candidate = x;
        count += (x == candidate) ? 1 : -1;
    }
    return candidate;
}

int main() {
    std::vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    std::cout << "Majority: " << majorityElement(nums) << std::endl;
    return 0;
}
