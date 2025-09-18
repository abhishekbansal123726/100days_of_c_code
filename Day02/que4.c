#include <stdio.h>
#define PI 3.1416   // define constant value for PI

int main() {
    float radius, area, circumference;

    // Input radius
    printf("Enter radius: ");
    scanf("%f", &radius);

    // Calculations
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Output (rounded to 2 decimal places)
    printf("Area=%.2f, Circumference=%.2f\n", area, circumference);

    return 0;
}
