#include <stdio.h>

int main() {
    int rows = 5; // Number of rows for the pyramid

    // Outer loop to iterate through each row
    for (int i = 1; i <= rows; i++) {
        // Print leading spaces for alignment
        for (int space = 1; space <= rows - i; space++) {
            printf("  "); // Two spaces for alignment
        }

        // Print numbers in descending order
        for (int num = i; num >= 1; num--) {
            printf("%d ", num);
        }

        // Print numbers in ascending order, starting from 2
        for (int num = 2; num <= i; num++) {
            printf("%d ", num);
        }

        // Move to the next row
        printf("\n");
    }

    return 0; // Indicate successful program execution
}
