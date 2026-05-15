#include <stdio.h>

int main() {
    int number, position, n;
    int result = 0;
    
    printf("Enter an integer: ");
    scanf("%d", &number);
    
    printf("Enter starting bit position: ");
    scanf("%d", &position);
    
    printf("Enter number of bits to extract: ");
    scanf("%d", &n);
    
    // Create mask to extract n bits
    int mask = (1 << n) - 1;
    
    // Extract bits
    result = (number >> position) & mask;
    
    printf("Extracted bits value: %d\n", result);
    
    return 0;
}
