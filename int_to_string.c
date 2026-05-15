#include <stdio.h>

int main() {
    int number;
    char str[100];
    int i = 0;
    int isNegative = 0;
    
    printf("Enter an integer: ");
    scanf("%d", &number);
    
    // Handle negative numbers
    if (number < 0) {
        isNegative = 1;
        number = -number;
    }
    
    // Handle zero separately
    if (number == 0) {
        str[i++] = '0';
    }
    
    // Extract digits and store in reverse order
    while (number > 0) {
        str[i++] = (number % 10) + '0';
        number /= 10;
    }
    
    // Add negative sign if needed
    if (isNegative) {
        str[i++] = '-';
    }
    
    // Reverse the string (since digits were stored backwards)
    printf("Converted string: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", str[j]);
    }
    printf("\n");
    
    return 0;
}
