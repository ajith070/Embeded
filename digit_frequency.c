#include <stdio.h>

// Function to count digit frequencies
void countDigits(long long num, int frequency[]) {
    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }
    
    // Special case: number is 0
    if (num == 0) {
        frequency[0]++;
        return;
    }
    
    // Extract each digit and update frequency
    while (num > 0) {
        int digit = num % 10;
        frequency[digit]++;
        num /= 10;
    }
}

int main() {
    long long number;
    int frequency[10] = {0};  // Array to store frequency of digits 0-9
    
    printf("Enter an integer: ");
    scanf("%lld", &number);
    
    countDigits(number, frequency);
    
    // Display the frequency of each digit
    printf("Digit frequencies:\n");
    for (int i = 0; i < 10; i++) {
        if (frequency[i] > 0) {
            printf("Digit %d appears %d time(s)\n", i, frequency[i]);
        }
    }
    
    return 0;
}
