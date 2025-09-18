#include <stdio.h>

int main() {
    int length, breadth;

    // Input length and breadth
    printf("Enter length and breadth: ");
    scanf("%d %d", &length, &breadth);

    // Calculations
    int area = length * breadth;
    int perimeter = 2 * (length + breadth);

    // Output
    printf("Area=%d, Perimeter=%d\n", area, perimeter);

    return 0;
}
