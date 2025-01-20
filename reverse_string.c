#include <stdio.h>
#include <string.h>

int main() {
    int len, i;
    char str[100];

    printf("Enter a string: ");
    scanf("%99s", str); // Reads input (no spaces)

    printf("Original string: %s \n", str);

    len = strlen(str); // Get length of the string
    printf("Length of string: %d\n", len);

    // Printing the string in reverse
    printf("Reversed string: ");
    for (i = len - 1; i >= 0; i--) {  // Start from last character
        printf("%c", str[i]);  // Print character by character
    }
    printf("\n"); // New line after reversing

    return 0;
}
