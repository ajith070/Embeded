#include <stdio.h>

int main() {
    int arr[100], size, n, direction, i, j;
    
    printf("Enter size of array: ");
    scanf("%d", &size);
    
    printf("Enter %d elements: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter number of positions to rotate: ");
    scanf("%d", &n);
    
    printf("Enter direction (0 for left, 1 for right): ");
    scanf("%d", &direction);
    
    // Normalize n to avoid unnecessary rotations
    n = n % size;
    
    if (direction == 0) {  // Left rotation
        for (i = 0; i < n; i++) {
            int temp = arr[0];
            for (j = 0; j < size - 1; j++) {
                arr[j] = arr[j + 1];
            }
            arr[size - 1] = temp;
        }
    } else {  // Right rotation
        for (i = 0; i < n; i++) {
            int temp = arr[size - 1];
            for (j = size - 1; j > 0; j--) {
                arr[j] = arr[j - 1];
            }
            arr[0] = temp;
        }
    }
    
    printf("Rotated array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
