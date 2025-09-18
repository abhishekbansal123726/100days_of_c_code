#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Calculations
    int sum = a + b;
    int diff = a - b;
    int product = a * b;
    int quotient = a / b; // Integer division

    // Output
    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", sum, diff, product, quotient);

    return 0;
}
