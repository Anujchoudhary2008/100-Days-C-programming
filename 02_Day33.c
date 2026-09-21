#include <stdio.h>

int main() {
    long long n;
    int count[10] = {0};
    int digit, maxDigit = 0;

    scanf("%lld", &n);

    while (n > 0) {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    for (int i = 1; i < 10; i++) {
        if (count[i] > count[maxDigit]) {
            maxDigit = i;
        }
    }

    printf("%d", maxDigit);

    return 0;
}