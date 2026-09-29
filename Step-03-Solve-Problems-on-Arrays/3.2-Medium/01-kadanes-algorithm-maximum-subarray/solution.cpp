#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

class Solution {
public:
    int maxSubArray(const std::vector<int>& nums) {
        int maxSoFar = INT_MIN, currSum = 0;
        for (int x : nums) {
            currSum += x;
            maxSoFar = std::max(maxSoFar, currSum);
            if (currSum < 0) currSum = 0;
        }
        return maxSoFar;
    }
};

int main() {
    Solution sol;
    std::vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    std::cout << "Maximum Subarray Sum: " << sol.maxSubArray(nums) << std::endl;
    return 0;
}
