#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y, result;
    char op;

    printf("Enter the first number:\n");
    scanf("%f", &x);

    printf("Enter the operator (+, -, *, /):\n");
    scanf(" %c", &op);

    printf("Enter the second number:\n");
    scanf("%f", &y);

    switch(op){
        case '+':
            result = x + y;
            printf("The result = %f\n", result);
            break;

        case '-':
            result = x - y;
            printf("The result = %f\n", result);
            break;

        case '*':
            result = x * y;
            printf("The result = %f\n", result);
            break;

        case '/':
            if (y != 0) {
                result = x / y;
                printf("The result = %f\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Invalid operator.\n");
    }

    return 0;
}
