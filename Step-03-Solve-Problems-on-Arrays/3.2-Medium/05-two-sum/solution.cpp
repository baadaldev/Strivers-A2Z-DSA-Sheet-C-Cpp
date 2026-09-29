#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> twoSum(const std::vector<int>& nums, int target) {
    std::unordered_map<int, int> mp;
    for (int i = 0; i < (int)nums.size(); i++) {
        int comp = target - nums[i];
        if (mp.count(comp)) return {mp[comp], i};
        mp[nums[i]] = i;
    }
    return {};
}
int main() {
    auto res = twoSum({2, 7, 11, 15}, 9);
    std::cout << res[0] << ", " << res[1] << std::endl;
    return 0;
}
