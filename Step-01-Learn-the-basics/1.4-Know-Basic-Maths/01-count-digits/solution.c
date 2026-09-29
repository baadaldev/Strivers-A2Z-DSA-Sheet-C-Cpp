#include <stdio.h>

int countDigits(int n) {
    if (n == 0) return 1;
    int count = 0;
    if (n < 0) n = -n;
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}

int main() {
    int n = 7789;
    printf("Number of digits in %d is: %d\n", n, countDigits(n));
    return 0;
}
