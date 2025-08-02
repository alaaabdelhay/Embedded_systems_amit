#include <stdio.h>


void edit(int *ptr) {
    (*ptr)++;
}

int main() {
    int x;

    printf("Enter the value of x\n");
    scanf("%d", &x);


    printf("Before calling edit x = %d\n", x);

    edit(&x);


    printf("After calling edit x = %d\n", x);


    int numbers[4];
    numbers[0] = x;
    numbers[1] = 5;
    numbers[2] = 20;
    numbers[3] = 80;


    printf("\nStored numbers: ");
    for(int i = 0; i < 4; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    return 0;
}
