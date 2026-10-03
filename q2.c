#include <stdio.h>

void checkEvenOdd(int n);
void checkSign(int n);
int isPrime(int n);
int isPerfect(int n);

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nClassification Report:\n");

    checkEvenOdd(num);
    checkSign(num);

    if (isPrime(num))
        printf("Prime: Yes\n");
    else
        printf("Prime: No\n");

    if (isPerfect(num))
        printf("Perfect: Yes\n");
    else
        printf("Perfect: No\n");

    return 0;
}

// Check even or odd
void checkEvenOdd(int n) {
    if (n % 2 == 0)
        printf("Even/Odd: Even\n");
    else
        printf("Even/Odd: Odd\n");
}

// Check positive, negative or zero
void checkSign(int n) {
    if (n > 0)
        printf("Sign: Positive\n");
    else if (n < 0)
        printf("Sign: Negative\n");
    else
        printf("Sign: Zero\n");
}

// Check prime
int isPrime(int n) {
    if (n <= 1)
        return 0;

    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

// Check perfect number
int isPerfect(int n) {
    int sum = 0;

    if (n <= 0)
        return 0;

    for (int i = 1; i < n; i++) {
        if (n % i == 0)
            sum = sum + i;
    }

    if (sum == n)
        return 1;
    else
        return 0;
}