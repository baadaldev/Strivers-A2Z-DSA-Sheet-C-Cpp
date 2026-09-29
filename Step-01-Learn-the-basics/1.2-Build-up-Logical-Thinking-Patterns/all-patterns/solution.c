#include <stdio.h>

void pattern1(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) printf("* ");
        printf("\n");
    }
}

void pattern7(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) printf(" ");
        for (int j = 0; j < 2 * i + 1; j++) printf("*");
        printf("\n");
    }
}

int main() {
    int n = 5;
    printf("Pattern 1 (Square):\n");
    pattern1(n);
    printf("\nPattern 7 (Pyramid):\n");
    pattern7(n);
    return 0;
}
