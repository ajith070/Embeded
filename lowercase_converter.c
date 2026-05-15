#include <stdio.h>

int main() {
    char str[1000];
    int i;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Convert uppercase to lowercase
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;  // Convert to lowercase using ASCII
        }
    }
    
    printf("Lowercase string: %s", str);
    
    return 0;
}
