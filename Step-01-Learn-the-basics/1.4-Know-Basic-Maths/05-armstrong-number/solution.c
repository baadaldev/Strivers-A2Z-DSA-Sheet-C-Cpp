#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isArmstrong(int n) {
    int temp = n, sum = 0, k = 0;
    int t = n;
    while (t > 0) { k++; t /= 10; }
    while (temp > 0) {
        int d = temp % 10;
        sum += (int)pow(d, k);
        temp /= 10;
    }
    return sum == n;
}

int main() {
    int n = 153;
    printf("%d is Armstrong: %s\n", n, isArmstrong(n) ? "true" : "false");
    return 0;
}
