#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char temp;
    int length, i;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character
    str[strcspn(str, "\n")] = 0;
    
    length = strlen(str);
    
    // Reverse using swapping
    for (i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
    
    printf("Reversed string: %s\n", str);
    
    return 0;
}
