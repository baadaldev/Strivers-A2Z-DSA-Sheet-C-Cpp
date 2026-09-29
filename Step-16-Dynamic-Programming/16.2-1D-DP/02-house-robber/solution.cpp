#include <iostream>
#include <vector>
#include <algorithm>

int rob(const std::vector<int>& nums) {
    int prev2 = 0, prev1 = 0;
    for (int x : nums) {
        int cur = std::max(x + prev2, prev1);
        prev2 = prev1;
        prev1 = cur;
    }
    return prev1;
}
int main() {
    std::cout << "Max loot: " << rob({2, 7, 9, 3, 1}) << std::endl;
    return 0;
}
