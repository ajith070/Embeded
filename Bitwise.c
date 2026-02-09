#include <stdio.h>

unsigned char modifyRegister(unsigned char reg) {
    // Create the masks
    unsigned char mask2 = (1 << 2); 
    unsigned char mask5 = (1 << 5); 
    unsigned char mask0 = (1 << 0); 

    // 1. Set bit 2
    reg = reg | mask2;

    // 2. Clear bit 5
    reg = reg & (~mask5);

    // 3. Toggle bit 0
    reg = reg ^ mask0;

    return reg;
}

int main() {
    unsigned char myReg = 0; 
    unsigned char result = modifyRegister(myReg);
    
    printf("Result: %d\n", result);
    return 0;
}
