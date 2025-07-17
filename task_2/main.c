#include <stdio.h>
#include <math.h>
int main()
{
    int x, power, numbers, i = 0, y = 0;
    printf("Enter the number = ");
    scanf("%d", &x);

    power = x;
    while (power != 0) {
        power = power / 10;
        i++;
    }

    numbers = x;
    while (numbers != 0) {
        y = pow(numbers % 10, i) + y;
        numbers = numbers / 10;
    }

    if (y == x) {
        printf("Armstrong Number\n");
    } else {
        printf("Not an Armstrong Number\n");
    }

    return 0;
}
