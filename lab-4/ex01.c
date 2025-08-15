#include <stdio.h>

int main(void) {
    int i, x, sum = 0;
    for (i = 1; i <= 10; i++) {
        printf("%d.Enter the number: ", i);
        scanf("%d", &x);
        sum += x;
    }
    printf("\ntotal sum is %d\n", sum);
    printf("Average is %.2f\n", sum / 10.0);
    return 0;
} 
