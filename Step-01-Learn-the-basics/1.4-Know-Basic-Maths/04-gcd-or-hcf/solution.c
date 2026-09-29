#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

int main() {
    int a = 52, b = 10;
    printf("GCD of %d and %d is: %d\n", a, b, gcd(a, b));
    return 0;
}
