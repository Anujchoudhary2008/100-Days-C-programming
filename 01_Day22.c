#include <stdio.h>

int main() {
    int n, original, digit, sum = 0;
    int factorial, i;

    scanf("%d", &n);

    original = n;

    while (n != 0) {
        digit = n % 10;

        factorial = 1;

        for (i = 1; i <= digit; i++) {
            factorial = factorial * i;
        }

        sum = sum + factorial;
        n = n / 10;
    }

    if (sum == original)
        printf("Strong number");
    else
        printf("Not strong number");

    return 0;
}