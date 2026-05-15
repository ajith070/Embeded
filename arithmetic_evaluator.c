#include <stdio.h>

float add(float a, float b) { return a + b; }
float subtract(float a, float b) { return a - b; }
float multiply(float a, float b) { return a * b; }
float divide(float a, float b) {
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return 0;
    }
    return a / b;
}

// Selector function
float calculate(float x, float y, char op) {
    switch(op) {
        case '+': return add(x, y);
        case '-': return subtract(x, y);
        case '*': return multiply(x, y);
        case '/': return divide(x, y);
        default: 
            printf("Error: Invalid operator!\n");
            return 0;
    }
}

int main() {
    float num1, num2;
    char operator;
    
    printf("Enter first number: ");
    scanf("%f", &num1);
    
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);
    
    printf("Enter second number: ");
    scanf("%f", &num2);
    
    float result = calculate(num1, num2, operator);
    
    if (operator != '/' || num2 != 0) {
        printf("%.2f %c %.2f = %.2f\n", num1, operator, num2, result);
    }
    
    return 0;
}
