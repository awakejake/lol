#include <stdio.h>

// Function to calculate the sum of squares of two numbers
int sumOfSquares(int num1, int num2) {
    // Calculate the square of each number and sum them
    int result = (num1 * num1) + (num2 * num2);
    // Return the calculated sum
    return result;
}

int main() {
    int number1, number2;


    printf("Enter the two integers: ");
 
    scanf("%d %d", &number1, &number2);


    int finalSum = sumOfSquares(number1, number2);


    printf("Sum of squares of %d and %d is %d\n", number1, number2, finalSum);

    return 0;
}