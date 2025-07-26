#include <stdio.h>


int fibonacci_recursive(int n) {
    if (n == 0) return 0;
    else if (n == 1) return 1;
    else return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}


void fibonacci_iterative(int n) {
    int first = 0, second = 1, next;
    printf("Fibonacci Series (Iterative): ");
    for (int i = 0; i < n; i++) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
    printf("\n");
}


void print_fibonacci_recursive_series(int n) {
    printf("Fibonacci Series (Recursive): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci_recursive(i));
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    fibonacci_iterative(n);
    print_fibonacci_recursive_series(n);

    return 0;
}
