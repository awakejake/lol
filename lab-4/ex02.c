#include <stdio.h>

int main(void) {
    int count = 1, x, sum = 0;
    while (count <= 10) {
        printf("%d.Enter the number:", count);
        scanf("%d", &x);
        sum += x;
        count++;
    }
    printf("\nTotal sum is %d\n", sum);
    return 0;
}