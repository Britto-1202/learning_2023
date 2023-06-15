#include <stdio.h>

int findLargestNumber(int num) {
    int largest = 0;

    // Iterate through each digit position
    for (int i = 0; i < 4; i++) {
        int temp = num;

        // Delete the digit at position i
        for (int j = 0; j < i; j++) {
            temp /= 10;
        }

        int divisor = 1;
        for (int j = i + 1; j < 4; j++) {
            divisor *= 10;
        }

        temp %= divisor;
        if (temp > largest) {
            largest = temp;
        }
  }

    return largest;
}

int main() {
    int number;

    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    int largestNumber = findLargestNumber(number);
    printf("The largest number by deleting a single digit: %d\n", largestNumber);

    return 0;
}
