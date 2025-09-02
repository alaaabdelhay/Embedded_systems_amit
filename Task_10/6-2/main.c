#include <stdio.h>

// Define a struct for complex numbers
struct Complex {
    float real;
    float imag;
};

int main() {
    struct Complex num1, num2, sum;

    // Input for first complex number
    printf("For 1st complex number\n");
    printf("Enter real and imaginary part respectively: ");
    scanf("%f %f", &num1.real, &num1.imag);

    // Input for second complex number
    printf("For 2nd complex number\n");
    printf("Enter real and imaginary part respectively: ");
    scanf("%f %f", &num2.real, &num2.imag);

    // Add the two complex numbers
    sum.real = num1.real + num2.real;
    sum.imag = num1.imag + num2.imag;

    // Print the result
    printf("Sum = %.2f + %.2f\n", sum.real, sum.imag);

    return 0;
}
