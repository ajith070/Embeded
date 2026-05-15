#include <stdio.h>

int main() {
    int num1, num2, position, n;
    int mask, bitsToReplace;
    
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    
    printf("Enter the second integer: ");
    scanf("%d", &num2);
    
    printf("Enter starting bit position: ");
    scanf("%d", &position);
    
    printf("Enter number of bits to replace: ");
    scanf("%d", &n);
    
    // Create mask to clear n bits in num1
    mask = ((1 << n) - 1) << position;
    
    // Clear n bits in num1
    num1 = num1 & ~mask;
    
    // Extract n bits from num2 and position them correctly
    bitsToReplace = (num2 & ((1 << n) - 1)) << position;
    
    // Combine
    int result = num1 | bitsToReplace;
    
    printf("Result after replacement: %d\n", result);
    
    return 0;
}
