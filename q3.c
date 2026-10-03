#include <stdio.h>

int sumDigits(int n) {
    int sum = 0;

    if (n < 0)
        n = -n;

    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int countDigits(int n) {
    int count = 0;

    if (n == 0)
        return 1;

    if (n < 0)
        n = -n;

    while (n != 0) {
        count++;
        n /= 10;
    }

    return count;
}

int reverseNumber(int n) {
    int reverse = 0;

    while (n != 0) {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }

    return reverse;
}

int isPalindrome(int n) {
    if (n < 0)
        return 0;

    return n == reverseNumber(n);
}

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("\nSum of digits = %d", sumDigits(n));
    printf("\nNumber of digits = %d", countDigits(n));
    printf("\nReverse = %d", reverseNumber(n));

    if (isPalindrome(n))
        printf("\nNumber is a Palindrome");
    else
        printf("\nNumber is not a Palindrome");

    return 0;
}