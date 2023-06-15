#include <stdio.h>

int countSetBits(unsigned int num) {
    int count = 0;
    while (num > 0) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int main() {
    unsigned int array[100];
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array in hexadecimal format:\n");
    for (int i = 0; i < size; i++) {
        scanf("%x", &array[i]);
    }

    int totalSetBits = 0;
    for (int i = 0; i < size; i++) {
        totalSetBits += countSetBits(array[i]);
    }

    printf("Total number of set bits: %d\n", totalSetBits);

    return 0;
}