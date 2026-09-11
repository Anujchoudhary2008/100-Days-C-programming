#include <stdio.h>

int main() {
    long long n;
    int count[10] = {0};
    int digit, maxDigit = 0, maxCount = 0, i;

    scanf("%lld", &n);

    // Count frequency of each digit
    while (n > 0) {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    // Find the most frequent digit
    // In case of a tie, smaller digit is selected
    for (i = 0; i <= 9; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("%d", maxDigit);

    return 0;
}