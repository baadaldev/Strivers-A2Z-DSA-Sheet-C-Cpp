#include <stdio.h>
#include <string.h>

void reverseStr(char* s, int l, int r) {
    while (l < r) {
        char t = s[l]; s[l++] = s[r]; s[r--] = t;
    }
}
int main() {
    char s[] = "the sky is blue";
    int n = strlen(s);
    reverseStr(s, 0, n - 1);
    int start = 0;
    for (int i = 0; i <= n; i++) {
        if (s[i] == ' ' || s[i] == '\0') {
            reverseStr(s, start, i - 1);
            start = i + 1;
        }
    }
    printf("%s\n", s);
    return 0;
}
