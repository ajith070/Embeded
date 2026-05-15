#include <stdio.h>
#include <limits.h>

int main() {
    int arr[100], size, i;
    int firstMax, secondMax;
    int firstMin, secondMin;
    
    printf("Enter size of array: ");
    scanf("%d", &size);
    
    printf("Enter %d elements: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Initialize
    firstMax = secondMax = INT_MIN;
    firstMin = secondMin = INT_MAX;
    
    // Find largest and second largest
    for (i = 0; i < size; i++) {
        if (arr[i] > firstMax) {
            secondMax = firstMax;
            firstMax = arr[i];
        } else if (arr[i] > secondMax && arr[i] != firstMax) {
            secondMax = arr[i];
        }
        
        // Find smallest and second smallest
        if (arr[i] < firstMin) {
            secondMin = firstMin;
            firstMin = arr[i];
        } else if (arr[i] < secondMin && arr[i] != firstMin) {
            secondMin = arr[i];
        }
    }
    
    if (secondMax == INT_MIN) {
        printf("No second largest element (all elements same?)\n");
    } else {
        printf("Second largest: %d\n", secondMax);
    }
    
    if (secondMin == INT_MAX) {
        printf("No second smallest element (all elements same?)\n");
    } else {
        printf("Second smallest: %d\n", secondMin);
    }
    
    return 0;
}
