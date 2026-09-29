#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> leaders(const std::vector<int>& arr) {
    std::vector<int> ans;
    int n = arr.size(), maxRight = arr[n - 1];
    ans.push_back(maxRight);
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > maxRight) {
            maxRight = arr[i];
            ans.push_back(maxRight);
        }
    }
    std::reverse(ans.begin(), ans.end());
    return ans;
}
int main() {
    auto res = leaders({16, 17, 4, 3, 5, 2});
    for (int x : res) std::cout << x << " ";
    std::cout << "\n";
    return 0;
}
