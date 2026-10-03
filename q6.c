#include <stdio.h>

void calculate(int a, int b, int *sum, int *diff,
               int *product, float *quotient) {

    *sum = a + b;
    *diff = a - b;
    *product = a * b;

    if (b != 0)
        *quotient = (float)a / b;
}

int main() {
    int a, b;
    int sum, diff, product;
    float quotient;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    calculate(a, b, &sum, &diff, &product, &quotient);

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", diff);
    printf("Product = %d\n", product);

    if (b != 0)
        printf("Quotient = %.2f\n", quotient);
    else
        printf("Division by zero is not possible.\n");

    return 0;
}