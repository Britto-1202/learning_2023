#include <stdio.h>

int main() {
    int arr[] = {64, 84, 21, 36, 17, 90, 77, 10, 48, 55};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;
    int sumEven = 0;
    int sumOdd = 0;

    for (i = 0; i < n; i++) {
        if (i % 2 == 0) {
            sumEven += arr[i];
        } else {
            sumOdd += arr[i];
        }
    }

    printf("Sum of even-indexed numbers: %d\n", sumEven);
    printf("Sum of odd-indexed numbers: %d\n", sumOdd);

    return 0;
}