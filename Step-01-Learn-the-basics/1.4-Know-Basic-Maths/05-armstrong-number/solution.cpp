#include <iostream>
#include <cmath>

bool isArmstrong(int n) {
    int temp = n, sum = 0, k = 0;
    int t = n;
    while (t > 0) { k++; t /= 10; }
    while (temp > 0) {
        int d = temp % 10;
        sum += (int)std::pow(d, k);
        temp /= 10;
    }
    return sum == n;
}

int main() {
    int n = 153;
    std::cout << n << " is Armstrong: " << (isArmstrong(n) ? "true" : "false") << std::endl;
    return 0;
}
