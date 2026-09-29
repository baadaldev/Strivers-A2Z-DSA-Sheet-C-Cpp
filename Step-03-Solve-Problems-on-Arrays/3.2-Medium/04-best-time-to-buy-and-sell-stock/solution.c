#include <stdio.h>

int maxProfit(int prices[], int n) {
    int minPrice = prices[0], maxProfit = 0;
    for (int i = 1; i < n; i++) {
        if (prices[i] < minPrice) minPrice = prices[i];
        else if (prices[i] - minPrice > maxProfit) maxProfit = prices[i] - minPrice;
    }
    return maxProfit;
}

int main() {
    int prices[] = {7, 1, 5, 3, 6, 4};
    printf("Max Profit: %d\n", maxProfit(prices, 6));
    return 0;
}
