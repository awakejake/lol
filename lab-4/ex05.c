#include <stdio.h>

int main(void) {
    int n, i;
    unsigned long long fact = 1ULL;

    printf("Enter a number: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Please enter a non-negative integer.\n");
        return 0;
    }
    for (i = 1; i <= n; i++) fact *= i;

    printf("Factorial of %d is %llu\n", n, fact);
    return 0;
}