#include <stdio.h>

int main() {
    int num1, num2, position, n, i;
    int bit1, bit2;
    
    printf("Enter first integer: ");
    scanf("%d", &num1);
    
    printf("Enter second integer: ");
    scanf("%d", &num2);
    
    printf("Enter starting bit position: ");
    scanf("%d", &position);
    
    printf("Enter number of bits to swap: ");
    scanf("%d", &n);
    
    // Swap each bit individually
    for (i = 0; i < n; i++) {
        // Get bits at the position
        bit1 = (num1 >> (position + i)) & 1;
        bit2 = (num2 >> (position + i)) & 1;
        
        // If bits are different, toggle both
        if (bit1 != bit2) {
            num1 = num1 ^ (1 << (position + i));
            num2 = num2 ^ (1 << (position + i));
        }
    }
    
    printf("After swapping:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);
    
    return 0;
}
