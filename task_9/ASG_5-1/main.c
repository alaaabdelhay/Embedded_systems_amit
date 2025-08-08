#include <stdio.h>

int main() {
    int arr_1[5];
    int i, max, min, max_pos, min_pos;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr_1[i]);
    }

    printf("\nThe 5 elements are: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr_1[i]);
    }
    printf("\n");

    max = min = arr_1[0];
    max_pos = min_pos = 0;
    for (i = 1; i < 5; i++) {
        if (arr_1[i] > max) {
            max = arr_1[i];
            max_pos = i;
        }
        if (arr_1[i] < min) {
            min = arr_1[i];
            min_pos = i;
        }
    }

    printf("Maximum number: %d at position %d\n", max, max_pos);
    printf("Minimum number: %d at position %d\n", min, min_pos);

    for (i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (arr_1[i] > arr_1[j]) {
                int temp = arr_1[i];
                arr_1[i] = arr_1[j];
                arr_1[j] = temp;
            }
        }
    }

    printf("Array in ascending order: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr_1[i]);
    }
    printf("\n");

    return 0;
}
