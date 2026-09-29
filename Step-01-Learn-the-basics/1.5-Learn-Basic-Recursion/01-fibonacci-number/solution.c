#include <stdio.h>

int fib(int n) {
    if (n <= 1) return n;
    int a = 0, b = 1;
    for (int i = 2; i <= n; i++) {
        int c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n = 7;
    printf("Fibonacci(%d) = %d\n", n, fib(n));
    return 0;
}
