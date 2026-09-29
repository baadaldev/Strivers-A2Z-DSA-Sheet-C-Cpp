#include <iostream>

void pattern1(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) std::cout << "* ";
        std::cout << "\n";
    }
}

void pattern7(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) std::cout << " ";
        for (int j = 0; j < 2 * i + 1; j++) std::cout << "*";
        std::cout << "\n";
    }
}

int main() {
    int n = 5;
    std::cout << "Pattern 1 (Square):\n";
    pattern1(n);
    std::cout << "\nPattern 7 (Pyramid):\n";
    pattern7(n);
    return 0;
}
