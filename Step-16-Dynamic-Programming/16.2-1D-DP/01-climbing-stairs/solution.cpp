#include <iostream>

int climbStairs(int n) {
    if (n <= 2) return n;
    int prev2 = 1, prev1 = 2;
    for (int i = 3; i <= n; i++) {
        int cur = prev1 + prev2;
        prev2 = prev1;
        prev1 = cur;
    }
    return prev1;
}
int main() {
    std::cout << "Ways to climb 5: " << climbStairs(5) << std::endl;
    return 0;
}
