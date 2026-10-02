#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int x, leftSum, rightSum;

    for (x = 1; x <= n; x++) {
        leftSum = 0;
        rightSum = 0;

    
        for (int i = 1; i <= x; i++) {
            leftSum += i;
        }

    
        for (int i = x; i <= n; i++) {
            rightSum += i;
        }

        if (leftSum == rightSum) {
            printf("%d", x);
            return 0;
        }
    }

    printf("-1");

    return 0;
}