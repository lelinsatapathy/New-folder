#include <stdio.h>
#include <string.h>

int isPalindrome(char *str, int start, int end) {
    while (start < end) {
        if (str[start] != str[end]) {
            return 0;  // Not a palindrome
        }
        start++;
        end--;
    }
    return 1;  // Palindrome
}

void checkPalindromicSubstrings(char *str) {
    int len = strlen(str);
    printf("Palindromic substrings:\n");

    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            if (isPalindrome(str, i, j)) {
                for (int k = i; k <= j; k++) {
                    printf("%c", str[k]);
                }
                printf("\n");
            }
        }
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    checkPalindromicSubstrings(str);

    return 0;
}
