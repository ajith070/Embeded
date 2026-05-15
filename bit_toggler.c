#include <stdio.h>

int main() {
    int number, position, n, i;
    
    printf("Enter an integer: ");
    scanf("%d", &number);
    
    printf("Enter starting bit position (0-based from right): ");
    scanf("%d", &position);
    
    printf("Enter number of bits to toggle: ");
    scanf("%d", &n);
    
    // Toggle n bits starting from given position
    for (i = 0; i < n; i++) {
        number = number ^ (1 << (position + i));
    }
    
    printf("Result after toggling: %d\n", number);
    
    return 0;
}
