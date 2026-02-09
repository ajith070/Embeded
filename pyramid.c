#include <stdio.h>

int main() {
    int n = 5;
    int i, j, k;

    for (i = 1; i <= n; i++) {
        // Print the spaces to push the stars to the center
        for (j = 1; j <= (n - i); j++) {
            printf(" ");
        }

        // Print the stars
        // Formula: (2 * row_number) - 1
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
