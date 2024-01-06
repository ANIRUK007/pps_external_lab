#include <stdio.h>
//its a mth of doin this
void fibonacci(int n);

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1; 
    }

    printf("Fibonacci series up to %d: ", n);
    fibonacci(n);

    return 0;
}

void fibonacci(int n) {
    int fibArr[100]; 
    fibArr[0] = 0;
    fibArr[1] = 1;

    if (n >= 1) {
        printf("%d ", fibArr[0]);
    }
    if (n >= 2) {
        printf("%d ", fibArr[1]);
    }

    for (int i = 2; i <= n; i++) {
        fibArr[i] = fibArr[i - 1] + fibArr[i - 2];
        printf("%d ", fibArr[i]);
    }

    printf("\n");
}
