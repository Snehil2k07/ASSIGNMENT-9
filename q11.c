#include <stdio.h>

void analyzeString(char *str, int *vowels, int *consonants,
                   int *digits, int *spaces, int *special) {

    int i = 0;
    char ch;

    *vowels = 0;
    *consonants = 0;
    *digits = 0;
    *spaces = 0;
    *special = 0;

    while (str[i] != '\0') {

        ch = str[i];

        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        if (ch >= 'a' && ch <= 'z') {

            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u')
                (*vowels)++;
            else
                (*consonants)++;
        }
        else if (ch >= '0' && ch <= '9') {
            (*digits)++;
        }
        else if (ch == ' ') {
            (*spaces)++;
        }
        else if (ch != '\n') {
            (*special)++;
        }

        i++;
    }
}

int main() {
    char str[200];

    int vowels, consonants;
    int digits, spaces, special;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    analyzeString(str, &vowels, &consonants,
                  &digits, &spaces, &special);

    printf("\n--- String Analysis ---\n");
    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);
    printf("Digits = %d\n", digits);
    printf("Spaces = %d\n", spaces);
    printf("Special Characters = %d\n", special);

    return 0;
}