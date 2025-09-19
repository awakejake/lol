#include <stdio.h>


void sumEvenAndOdd(int arr[], int size, int *even_sum, int *odd_sum) {
 
    *even_sum = 0;
    *odd_sum = 0;


    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {

            *even_sum += arr[i];
        } else {
     
            *odd_sum += arr[i];
        }
    }
}

int main() {
    int n;


    printf("N: ");
    scanf("%d", &n);


    int numbers[n];


    for (int i = 0; i < n; i++) {
        printf("Input: ");
        scanf("%d", &numbers[i]);
    }

    int even_sum_result, odd_sum_result;


    sumEvenAndOdd(numbers, n, &even_sum_result, &odd_sum_result);

    printf("Output:\n");
    printf("Sum of even number: %d\n", even_sum_result);
    printf("Sum of odd number: %d\n", odd_sum_result);

    return 0;
}