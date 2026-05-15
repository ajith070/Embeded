#include <stdio.h>

int main() {
    int number;
    
    // Prompt user for input
    printf("Enter a whole number: ");
    scanf("%d", &number);
    
    // Check if the number is even or odd
    if (number % 2 == 0) {
        printf("%d is an even number.\n", number);
    } else {
        printf("%d is an odd number.\n", number);
    }
    
    return 0;
}
