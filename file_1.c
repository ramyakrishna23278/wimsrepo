#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Ask the user for two numbers
    printf("Enter two numbers to add:\n");

    // Read the numbers from user input
    scanf("%d %d", &num1, &num2);

    // Calculate the sum
    sum = num1 + num2;

    // Display the result
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}


