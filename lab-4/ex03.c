#include <stdio.h>

int main(void) {
    int n;
    do {
        printf("Enter the number: ");
        scanf("%d", &n);
        if (n == 0) {
            printf("Exiting Program... Byee\n");
            break;
        }
        if (n % 2 == 0) printf("%d is even.\n", n);
        else            printf("%d is odd.\n", n);
    } while (1);
    return 0;
}