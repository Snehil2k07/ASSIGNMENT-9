#include <stdio.h>

#define MAX 100

void display(int *arr, int size) {
    int i;

    if (size == 0) {
        printf("Array is empty.\n");
        return;
    }

    printf("Array: ");

    for (i = 0; i < size; i++)
        printf("%d ", *(arr + i));

    printf("\n");
}

void insertElement(int *arr, int *size, int position, int value) {
    int i;

    if (*size >= MAX) {
        printf("Array is full.\n");
        return;
    }

    if (position < 1 || position > *size + 1) {
        printf("Invalid position.\n");
        return;
    }

    for (i = *size; i >= position; i--)
        arr[i] = arr[i - 1];

    arr[position - 1] = value;

    (*size)++;

    printf("Element inserted successfully.\n");
}

int deleteElement(int *arr, int *size, int position, int *deleted) {
    int i;

    if (position < 1 || position > *size) {
        printf("Invalid position.\n");
        return 0;
    }

    *deleted = arr[position - 1];

    for (i = position - 1; i < *size - 1; i++)
        arr[i] = arr[i + 1];

    (*size)--;

    return 1;
}

int main() {
    int arr[MAX];
    int size, i;
    int choice, position, value, deleted;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    if (size < 0 || size > MAX) {
        printf("Invalid array size.");
        return 0;
    }

    printf("Enter %d elements: ", size);

    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    do {
        printf("\n--- MENU ---\n");
        printf("1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            display(arr, size);
            break;

        case 2:
            printf("Enter position: ");
            scanf("%d", &position);

            printf("Enter value: ");
            scanf("%d", &value);

            insertElement(arr, &size, position, value);
            break;

        case 3:
            printf("Enter position to delete: ");
            scanf("%d", &position);

            if (deleteElement(arr, &size, position, &deleted))
                printf("Deleted value = %d\n", deleted);

            break;

        case 4:
            printf("Program terminated.\n");
            break;

        default:
            printf("Invalid choice.\n");
        }

    } while (choice != 4);

    return 0;
}