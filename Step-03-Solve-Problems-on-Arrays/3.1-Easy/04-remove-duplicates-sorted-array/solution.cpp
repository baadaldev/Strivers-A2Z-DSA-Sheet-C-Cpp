#include <iostream>
#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        if (nums.empty()) return 0;
        int i = 0;
        for (size_t j = 1; j < nums.size(); j++) {
            if (nums[j] != nums[i]) {
                nums[++i] = nums[j];
            }
        }
        return i + 1;
    }
};

int main() {
    Solution sol;
    std::vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int k = sol.removeDuplicates(nums);
    std::cout << "Unique count: " << k << "\nElements: ";
    for (int i = 0; i < k; i++) std::cout << nums[i] << " ";
    std::cout << "\n";
    return 0;
}
