#include <stdio.h>

int main() {
    char str[100];
    int result = 0;
    int i = 0;
    int sign = 1;
    
    printf("Enter a number as a string: ");
    scanf("%s", str);
    
    // Check for negative sign
    if (str[0] == '-') {
        sign = -1;
        i = 1;  // Start from next character
    }
    
    // Convert each character to digit and build the number
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            result = result * 10 + (str[i] - '0');
        } else {
            printf("Error: Invalid character detected!\n");
            return 1;
        }
        i++;
    }
    
    result = result * sign;
    printf("Converted integer value: %d\n", result);
    
    return 0;
}
