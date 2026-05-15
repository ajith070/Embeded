#include <stdio.h>

int main() {
    int arr[100], temp[100];
    int size, i, j = 0;
    
    printf("Enter size of array: ");
    scanf("%d", &size);
    
    printf("Enter %d elements (mix of positive and negative): ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    // First pass: copy all negative numbers
    for (i = 0; i < size; i++) {
        if (arr[i] < 0) {
            temp[j++] = arr[i];
        }
    }
    
    // Second pass: copy all non-negative numbers
    for (i = 0; i < size; i++) {
        if (arr[i] >= 0) {
            temp[j++] = arr[i];
        }
    }
    
    // Copy back to original array
    for (i = 0; i < size; i++) {
        arr[i] = temp[i];
    }
    
    printf("Rearranged array (negatives first): ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
