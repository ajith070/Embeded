#include <stdio.h>

int main() {
    int number, i;
    int isPrime = 1;  // Flag variable: 1 means prime, 0 means not prime
    
    // Get input from user
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Numbers less than 2 are not prime
    if (number < 2) {
        isPrime = 0;
    } else {
        // Check for divisors from 2 to number-1
        // We only need to check up to the square root for efficiency,
        // but we'll keep it simple and check all numbers
        for (i = 2; i < number; i++) {
            if (number % i == 0) {
                isPrime = 0;  // Found a divisor, so not prime
                break;        // No need to check further
            }
        }
    }
    
    // Display the result
    if (isPrime == 1) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }
    
    return 0;
}
