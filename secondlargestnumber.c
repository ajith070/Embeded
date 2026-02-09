#include <stdio.h>

int getSecondLargest(int numbers[], int count) {
    // We start by assuming the first two numbers are our winners
    int firstBest;
    int secondBest;

    if (numbers[0] > numbers[1]) {
        firstBest = numbers[0];
        secondBest = numbers[1];
    } else {
        firstBest = numbers[1];
        secondBest = numbers[0];
    }

    // Now we start looking from the third number (index 2) to the end
    for (int i = 2; i < count; i++) {
        int current = numbers[i];

        // If the current number beats the champion
        if (current > firstBest) {
            secondBest = firstBest; // Silver medal moves down
            firstBest = current;    // New Gold medal
        }
        // If it's not the champion, but it beats the runner-up
        else if (current > secondBest && current != firstBest) {
            secondBest = current;   // Update Silver medal
        }
    }

    return secondBest;
}

int main() {
    int scores[] = {10, 20, 5, 25, 15};
    int size = 5;

    int result = getSecondLargest(scores, size);
    printf("The runner-up score is: %d\n", result);

    return 0;
}
