#include <stdio.h>
#include <limits.h>

void analyzeArray(int *arr, int n, int *smallest,
                  int *secondSmallest, int *greatest,
                  int *secondGreatest, int *valid) {

    int i;

    *smallest = INT_MAX;
    *secondSmallest = INT_MAX;

    *greatest = INT_MIN;
    *secondGreatest = INT_MIN;

    for (i = 0; i < n; i++) {

        if (arr[i] < *smallest) {
            *secondSmallest = *smallest;
            *smallest = arr[i];
        }
        else if (arr[i] > *smallest &&
                 arr[i] < *secondSmallest) {
            *secondSmallest = arr[i];
        }

        if (arr[i] > *greatest) {
            *secondGreatest = *greatest;
            *greatest = arr[i];
        }
        else if (arr[i] < *greatest &&
                 arr[i] > *secondGreatest) {
            *secondGreatest = arr[i];
        }
    }

    if (*secondSmallest == INT_MAX)
        *valid = 0;
    else
        *valid = 1;
}

int main() {
    int arr[100];
    int n, i;

    int smallest, secondSmallest;
    int greatest, secondGreatest;
    int valid;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid array size.");
        return 0;
    }

    printf("Enter array elements: ");

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    analyzeArray(arr, n, &smallest, &secondSmallest,
                 &greatest, &secondGreatest, &valid);

    if (!valid) {
        printf("\nFewer than two distinct values exist.");
    }
    else {
        printf("\nSmallest = %d", smallest);
        printf("\nSecond Smallest = %d", secondSmallest);
        printf("\nGreatest = %d", greatest);
        printf("\nSecond Greatest = %d", secondGreatest);
    }

    return 0;
}