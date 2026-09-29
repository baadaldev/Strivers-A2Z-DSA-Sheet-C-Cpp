#include <iostream>
#include <vector>
#include <algorithm>

int findLargest(const std::vector<int>& arr) {
    int maxVal = arr[0];
    for (int num : arr) {
        if (num > maxVal) maxVal = num;
    }
    return maxVal;
}

int main() {
    std::vector<int> arr = {2, 5, 1, 3, 0};
    std::cout << "Largest element: " << findLargest(arr) << std::endl;
    return 0;
}
