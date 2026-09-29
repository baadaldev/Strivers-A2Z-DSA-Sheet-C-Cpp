#include <iostream>
#include <vector>

int singleNumber(const std::vector<int>& nums) {
    int ans = 0;
    for (int x : nums) ans ^= x;
    return ans;
}

int main() {
    std::vector<int> nums = {4, 1, 2, 1, 2};
    std::cout << "Single number: " << singleNumber(nums) << std::endl;
    return 0;
}
