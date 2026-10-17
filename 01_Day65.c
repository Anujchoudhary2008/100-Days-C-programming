#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], t[1000];
    
    
    
    if (scanf("%*s %*s \"%[^\"]\", %*s \"%[^\"]\"", s, t) == 2 || scanf("%s %s", s, t) == 2) {
        
       
        int len_s = strlen(s);
        int len_t = strlen(t);
        
        if (len_s != len_t) {
            printf("Not Anagram\n");
            return 0;
        }
        
        int count[26] = {0};
        for (int i = 0; i < len_s; i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }
        
        int is_anagram = 1;
        for (int i = 0; i < 26; i++) {
            if (count[i] != 0) {
                is_anagram = 0;
                break;
            }
        }
        
        if (is_anagram) {
            printf("Anagram\n");
        } else {
            printf("Not Anagram\n");
        }
    }
    
    return 0;
}