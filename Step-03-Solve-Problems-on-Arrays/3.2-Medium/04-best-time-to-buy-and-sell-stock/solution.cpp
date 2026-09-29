#include <iostream>
#include <vector>
#include <algorithm>

int maxProfit(const std::vector<int>& prices) {
    int minPrice = prices[0], maxProfit = 0;
    for (size_t i = 1; i < prices.size(); i++) {
        minPrice = std::min(minPrice, prices[i]);
        maxProfit = std::max(maxProfit, prices[i] - minPrice);
    }
    return maxProfit;
}

int main() {
    std::vector<int> prices = {7, 1, 5, 3, 6, 4};
    std::cout << "Max Profit: " << maxProfit(prices) << std::endl;
    return 0;
}
