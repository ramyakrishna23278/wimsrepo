#include <stdio.h>

// Function to add two numbers and return their sum
int add(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2, result;

    // Ask the user for two numbers
    printf("Enter two numbers to add:\n");

    // Read the numbers from user input
    scanf("%d %d", &num1, &num2);

    // Use the add function to get the sum of num1 and num2
    result = add(num1, num2);

    // Display the result
    printf("The sum of %d and %d is: %d\n", num1, num2, result);

    return 0;
}
