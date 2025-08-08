#include <stdio.h>

int main() {
    int arr[5];
    int i, temp;

    // Input elements
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Reverse array in place
    for (i = 0; i < 5 / 2; i++) {
        temp = arr[i];
        arr[i] = arr[5 - 1 - i];
        arr[5 - 1 - i] = temp;
    }

    // Print reversed array
    printf("\nReversed array: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
