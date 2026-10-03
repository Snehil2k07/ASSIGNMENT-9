#include <stdio.h>

void cyclicSwap(int *a, int *b, int *c) {
    int temp;

    temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("\nBefore swapping:");
    printf("\na = %d, b = %d, c = %d", a, b, c);

    cyclicSwap(&a, &b, &c);

    printf("\n\nAfter cyclic swapping:");
    printf("\na = %d, b = %d, c = %d", a, b, c);

    return 0;
}