#include <iostream>
#include <cmath>

int countDigits(int n) {
    if (n == 0) return 1;
    return (int)log10(abs(n)) + 1;
}

int main() {
    int n = 7789;
    std::cout << "Number of digits in " << n << " is: " << countDigits(n) << std::endl;
    return 0;
}
