#include <iostream>
#include <vector>

int missingNumber(const std::vector<int>& nums) {
    int xorVal = 0, n = nums.size();
    for (int i = 0; i < n; i++) xorVal ^= nums[i] ^ (i + 1);
    return xorVal;
}

int main() {
    std::vector<int> nums = {9,6,4,2,3,5,7,0,1};
    std::cout << "Missing: " << missingNumber(nums) << std::endl;
    return 0;
}
