#include <stdio.h>

int main() {
    // Declare variables
    float num1, num2;

    // Take input from the user
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Calculate and display the sum, product, and difference
    printf("Sum: %.2f\n", num1 + num2);
    printf("Product: %.2f\n", num1 * num2);
    printf("Difference: %.2f\n", num1 - num2);

    return 0;
}