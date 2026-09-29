#include <iostream>
#include <vector>

int findSecondLargest(const std::vector<int>& arr) {
    int largest = arr[0], secondLargest = -1;
    for (size_t i = 1; i < arr.size(); i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] < largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

int main() {
    std::vector<int> arr = {12, 35, 1, 10, 34, 1};
    std::cout << "Second largest: " << findSecondLargest(arr) << std::endl;
    return 0;
}
