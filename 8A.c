#include <stdio.h>

void printFibonacci(int n);

int main() {
    int limit;

    printf("Enter the limit for Fibonacci series: ");
    scanf("%d", &limit);

    if (limit < 0) {
        printf("Please enter a non-negative limit.\n");
        return 1; // Exit with an error code
    }

    printFibonacci(limit);

    return 0;
}

void printFibonacci(int n) {
    int first = 0, second = 1, next;

    printf("Fibonacci series up to %d terms:\n", n);

    for (int i = 0; i <= n; i++) {
        printf("%d, ", first);

        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");
}
