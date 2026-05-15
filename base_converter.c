#include <stdio.h>

// Function to convert decimal to any base (2-16)
void convertBase(int decimal, int base) {
    char result[100];
    int index = 0;
    
    // Handle special case
    if (decimal == 0) {
        printf("Converted value: 0\n");
        return;
    }
    
    // Convert using repeated division
    while (decimal > 0) {
        int remainder = decimal % base;
        
        if (remainder < 10) {
            result[index] = remainder + '0';  // Convert to char digit
        } else {
            result[index] = remainder - 10 + 'A';  // Convert to A-F
        }
        
        decimal /= base;
        index++;
    }
    
    // Print in reverse order
    printf("Converted value: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", result[i]);
    }
    printf("\n");
}

int main() {
    int number, base;
    
    printf("Enter a decimal number: ");
    scanf("%d", &number);
    
    printf("Enter target base (2-16): ");
    scanf("%d", &base);
    
    if (base < 2 || base > 16) {
        printf("Error: Base must be between 2 and 16.\n");
    } else {
        convertBase(number, base);
    }
    
    return 0;
}
