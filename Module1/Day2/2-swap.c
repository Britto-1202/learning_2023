#include <stdio.h>
#include <stdlib.h>
#include <string.h>

<<<<<<< HEAD

=======
>>>>>>> c01f5bb4b8a22fb040922a1624319e33a9bbc34c
void swap(void *a, void *b, size_t size) {
    void *temp = malloc(size);
    memcpy(temp, a, size);
    memcpy(a, b, size);
    memcpy(b, temp, size);
    free(temp);
}

int main() {
    int num1, num2;
<<<<<<< HEAD

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);

    // Swapping integers
    swap(&num1, &num2, sizeof(int));

    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);

    
=======
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);
    swap(&num1, &num2, sizeof(int));
    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);
>>>>>>> c01f5bb4b8a22fb040922a1624319e33a9bbc34c
    return 0;
}