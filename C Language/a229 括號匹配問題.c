#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
char out[99] = { '\0' };
int max;

int active(int, int, int);

int main() {
    int n = 0;
    while (scanf("%d", &n) != EOF) {
        max = n;
        active(0, 0, 0);
        printf("\n");
    }
    return 0;
}
int active(int n, int left, int right) {
    if (left > max || right > left)
        return 0;
    if (n == 2 * max) {
        out[n] = '\0';
        printf("%s\n", out);
        return 0;
    }
    else {
        out[n] = '(', active(n + 1, left + 1, right);
        out[n] = ')', active(n + 1, left, right + 1);
    }
}
