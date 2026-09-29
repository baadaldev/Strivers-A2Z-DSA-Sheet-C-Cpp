#include <iostream>
#include <vector>

std::vector<int> rearrangeArray(const std::vector<int>& nums) {
    int n = nums.size(), pos = 0, neg = 1;
    std::vector<int> ans(n);
    for (int x : nums) {
        if (x > 0) { ans[pos] = x; pos += 2; }
        else { ans[neg] = x; neg += 2; }
    }
    return ans;
}
int main() {
    auto res = rearrangeArray({3, 1, -2, -5, 2, -4});
    for (int x : res) std::cout << x << " ";
    std::cout << "\n";
    return 0;
}
