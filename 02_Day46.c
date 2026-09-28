#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};
    int i;

    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        freq[str[i] - 'a']++;
    }

    for (i = 0; str[i] != '\0'; i++) {
        if (freq[str[i] - 'a'] > 1) {
            printf("%c", str[i]);
            break;
        }
    }

    return 0;
}