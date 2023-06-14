#include <stdio.h>

int findbig(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);

    int result= findbig(a,b);

    printf("biggest number: %d\n", result);

    return 0;
}
