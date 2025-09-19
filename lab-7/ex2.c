#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void find_and_display_primes(int start, int end) {
    printf("The prime numbers within the interval are:\n");
    for (int i = start; i <= end; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int start_num, end_num;

    printf("Enter the start and end numbers: ");
    scanf("%d %d", &start_num, &end_num);


    find_and_display_primes(start_num, end_num);

    return 0;
}