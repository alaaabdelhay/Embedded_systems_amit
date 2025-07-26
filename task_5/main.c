#include <stdio.h>
#include <stdlib.h>




void swap(int *x, int *y) {
    printf("Before swapping\nx = %d\ty = %d\n", *x, *y);


    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;

    printf("After swapping\nx = %d\ty = %d\n", *x, *y);
}


int main()
{
    int x,y;

    printf("Enter first number:");
    scanf("%d",&x);
    printf("Enter second number:");
    scanf("%d",&y);
    swap(&x, &y);

    return 0;
}
