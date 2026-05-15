#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    char result[1000];
    int i, j = 0;
    int spaceFlag = 0;
    
    printf("Enter a sentence with multiple spaces: ");
    fgets(str, sizeof(str), stdin);
    
    // Process each character
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            result[j++] = str[i];
            spaceFlag = 0;  // Reset space flag
        } else {
            // Add a single space if previous char wasn't a space
            if (spaceFlag == 0) {
                result[j++] = ' ';
                spaceFlag = 1;
            }
        }
    }
    
    // Remove trailing space if any
    if (j > 0 && result[j-1] == ' ') {
        j--;
    }
    
    result[j] = '\0';
    printf("Cleaned string: %s\n", result);
    
    return 0;
}
