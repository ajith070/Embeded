#include <stdio.h>

int main() {
    int num, i;
    long long factorial = 1;  // Using long long to handle larger numbers
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    // Check for negative input
    if (num < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial
        for (i = 1; i <= num; i++) {
            factorial *= i;
        }
        printf("Factorial of %d = %lld\n", num, factorial);
    }
    
    return 0;
}
