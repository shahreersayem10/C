#include <stdio.h> 
int main() { 
    int n = 5;  // Number of rows 

    // Loop through each row 
    for (int i = 1; i <= n; i++) { 
        // Print spaces before the numbers in each row 
        for (int j = 1; j <= n - i; j++) { 
            printf("$"); 
        } 
        
        // Print numbers for each row 
        for (int j = i; j >= 1; j--) { 
            printf("%d  @ ", j);  // Print the number and space after it 
        } 
        
        // Move to the next line after printing numbers for this row 
        printf("\n"); 
    } 
    return 0;
}
