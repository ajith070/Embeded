#include <stdio.h>

int main() {
    int arr[100], unique[100];
    int size, i, j, k;
    int isDuplicate;
    
    printf("Enter size of array: ");
    scanf("%d", &size);
    
    printf("Enter %d elements: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Remove duplicates
    k = 0;
    for (i = 0; i < size; i++) {
        isDuplicate = 0;
        
        // Check if arr[i] already exists in unique array
        for (j = 0; j < k; j++) {
            if (arr[i] == unique[j]) {
                isDuplicate = 1;
                break;
            }
        }
        
        if (!isDuplicate) {
            unique[k++] = arr[i];
        }
    }
    
    printf("Array with unique elements: ");
    for (i = 0; i < k; i++) {
        printf("%d ", unique[i]);
    }
    printf("\n");
    
    return 0;
}
