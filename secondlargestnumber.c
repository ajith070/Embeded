#include <stdio.h>

int getSecondLargest(int numbers[], int count) {
    int firstBest;
    int secondBest;

    if (numbers[0] > numbers[1]) {
        firstBest = numbers[0];
        secondBest = numbers[1];
    } else {
        firstBest = numbers[1];
        secondBest = numbers[0];
    }

    for (int i = 2; i < count; i++) {
        int current = numbers[i];

        if (current > firstBest) {
            secondBest = firstBest;
            firstBest = current;
        }
        else if (current > secondBest && current != firstBest) {
            secondBest = current; 
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
