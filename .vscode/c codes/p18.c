#include <stdio.h>

int isPalindrome(int number) {
    int reverse = 0, temp = number;
    
    while (temp != 0) {
        reverse = reverse * 10 + temp % 10;
        temp /= 10;
    }
    
    if (reverse == number)
        return 1;
    else
        return 0;
}

void printPalindromeNumbers(int start, int end) {
    printf("Palindrome numbers between %d and %d are:\n", start, end);
    
    for (int i = start; i <= end; i++) {
        if (isPalindrome(i))
            printf("%d\n", i);
    }
}

int main() {
    int start, end;
    
    printf("Enter the range to find palindrome numbers:\n");
    printf("Start: ");
    scanf("%d", &start);
    printf("End: ");
    scanf("%d", &end);
    
    printPalindromeNumbers(start, end);
    
    return 0;
}
