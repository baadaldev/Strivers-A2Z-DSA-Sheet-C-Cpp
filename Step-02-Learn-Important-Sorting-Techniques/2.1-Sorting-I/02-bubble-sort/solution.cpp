#include <iostream>
#include <vector>
#include <utility>

void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = n - 1; i >= 1; i--) {
        bool didSwap = false;
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                didSwap = true;
            }
        }
        if (!didSwap) break;
    }
}

int main() {
    std::vector<int> arr = {13, 46, 24, 52, 20, 9};
    bubbleSort(arr);
    for (int x : arr) std::cout << x << " ";
    std::cout << "\n";
    return 0;
}
