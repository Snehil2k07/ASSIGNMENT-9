#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int a, b, c;
    int resultGCD, resultLCM;

    printf("Enter three positive integers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Please enter positive integers only.");
        return 0;
    }

    resultGCD = gcd(gcd(a, b), c);
    resultLCM = lcm(lcm(a, b), c);

    printf("\nGCD = %d", resultGCD);
    printf("\nLCM = %d", resultLCM);

    return 0;
}