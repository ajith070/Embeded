#include <stdio.h>

// Define Complex structure
struct Complex {
    float real;
    float imag;
};

// Function to add two complex numbers
struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

// Function to display complex number
void displayComplex(struct Complex c) {
    printf("%.2f + %.2fi\n", c.real, c.imag);
}

int main() {
    struct Complex num1, num2, sum;
    
    printf("Enter first complex number:\n");
    printf("Real part: ");
    scanf("%f", &num1.real);
    printf("Imaginary part: ");
    scanf("%f", &num1.imag);
    
    printf("Enter second complex number:\n");
    printf("Real part: ");
    scanf("%f", &num2.real);
    printf("Imaginary part: ");
    scanf("%f", &num2.imag);
    
    sum = addComplex(num1, num2);
    
    printf("\nFirst complex number: ");
    displayComplex(num1);
    printf("Second complex number: ");
    displayComplex(num2);
    printf("Sum: ");
    displayComplex(sum);
    
    return 0;
}
