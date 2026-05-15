#include <stdio.h>

int main() {
    int arr1[100], arr2[100], merged[200];
    int size1, size2, i, j, k;
    
    printf("Enter size of first sorted array: ");
    scanf("%d", &size1);
    
    printf("Enter %d elements in ascending order: ", size1);
    for (i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter size of second sorted array: ");
    scanf("%d", &size2);
    
    printf("Enter %d elements in ascending order: ", size2);
    for (i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }
    
    // Merge the arrays
    i = 0; j = 0; k = 0;
    while (i < size1 && j < size2) {
        if (arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }
    
    // Add remaining elements
    while (i < size1) {
        merged[k++] = arr1[i++];
    }
    while (j < size2) {
        merged[k++] = arr2[j++];
    }
    
    printf("Merged sorted array: ");
    for (i = 0; i < size1 + size2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    
    return 0;
}
