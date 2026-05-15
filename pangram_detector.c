#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    int letters[26] = {0};  // Track which letters appear
    int i, count = 0;
    
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    
    // Check each character
    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            char lower = tolower(str[i]);
            int index = lower - 'a';
            
            if (letters[index] == 0) {
                letters[index] = 1;
                count++;
            }
        }
    }
    
    if (count == 26) {
        printf("The string is a pangram!\n");
    } else {
        printf("The string is NOT a pangram. (Found %d/26 letters)\n", count);
    }
    
    return 0;
}
