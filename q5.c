#include <stdio.h>

int calculateTotal(int a, int b, int c, int d, int e) {
    return a + b + c + d + e;
}

float calculatePercentage(int total) {
    return total / 5.0;
}

char calculateGrade(float percentage) {
    if (percentage >= 90)
        return 'A';
    else if (percentage >= 80)
        return 'B';
    else if (percentage >= 70)
        return 'C';
    else if (percentage >= 60)
        return 'D';
    else
        return 'F';
}

int checkPass(int a, int b, int c, int d, int e) {
    if (a < 40 || b < 40 || c < 40 || d < 40 || e < 40)
        return 0;

    return 1;
}

int main() {
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;

    printf("Enter marks of five subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    total = calculateTotal(m1, m2, m3, m4, m5);
    percentage = calculatePercentage(total);

    printf("\nTotal = %d/500", total);
    printf("\nPercentage = %.2f%%", percentage);

    if (checkPass(m1, m2, m3, m4, m5)) {
        printf("\nGrade = %c", calculateGrade(percentage));
        printf("\nResult = PASS");
    } else {
        printf("\nGrade = F");
        printf("\nResult = FAIL");
    }

    return 0;
}