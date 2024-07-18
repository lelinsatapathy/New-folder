#include <stdio.h>

int main() {
    int n, i;
    long long int fib1 = 0, fib2 = 1, nextTerm;

    printf("Enter the number of Fibonacci numbers to generate: ");
    scanf("%d", &n);

    printf("The first %d Fibonacci numbers are:\n", n);

    if (n >= 1) {
        printf("%lld ", fib1);
    }

    if (n >= 2) {
        printf("%lld ", fib2);
    }

    i = 3;  // Start from the third number

    do {
        nextTerm = fib1 + fib2;
        printf("%lld ", nextTerm);
        fib1 = fib2;
        fib2 = nextTerm;
        i++;
    } while (i <= n);

    return 0;
}
