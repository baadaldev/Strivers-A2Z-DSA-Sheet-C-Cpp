#include <iostream>
#include <vector>
#include <algorithm>

void nextPermutation(std::vector<int>& nums) {
    int n = nums.size(), idx = -1;
    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] < nums[i + 1]) { idx = i; break; }
    }
    if (idx == -1) { std::reverse(nums.begin(), nums.end()); return; }
    for (int i = n - 1; i > idx; i--) {
        if (nums[i] > nums[idx]) {
            std::swap(nums[i], nums[idx]);
            break;
        }
    }
    std::reverse(nums.begin() + idx + 1, nums.end());
}
int main() {
    std::vector<int> nums = {1, 2, 3};
    nextPermutation(nums);
    for (int x : nums) std::cout << x << " ";
    std::cout << "\n";
    return 0;
}
