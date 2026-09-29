#include <stdio.h>

void printPascal(int n) {
    for (int line = 1; line <= n; line++) {
        int c = 1;
        for (int i = 1; i <= line; i++) {
            printf("%d ", c);
            c = c * (line - i) / i;
        }
        printf("\n");
    }
}
int main() {
    printPascal(5);
    return 0;
}
