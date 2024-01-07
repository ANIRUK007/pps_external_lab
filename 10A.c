#include <stdio.h>

int GCD(int a, int b);
int LCM(int a, int b);

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    int gcd = GCD(num1, num2);
    int lcm = LCM(num1, num2);

    printf("GCD of %d and %d is %d\n", num1, num2, gcd);
    printf("LCM of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}

int GCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int LCM(int a, int b) {
    int gcd = GCD(a, b);
    int lcm = (a * b) / gcd;
    return lcm;
}
