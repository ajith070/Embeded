#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length, i;
    int isPalindrome = 1;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character if present
    str[strcspn(str, "\n")] = 0;
    
    length = strlen(str);
    
    // Check palindrome by comparing from both ends
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }
    
    if (isPalindrome) {
        printf("\"%s\" is a palindrome.\n", str);
    } else {
        printf("\"%s\" is not a palindrome.\n", str);
    }
    
    return 0;
}
