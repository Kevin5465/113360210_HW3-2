#include <stdio.h>

double power(double base, int exponent) {
    if (exponent == 0) {
        return 1;
    }
    else {
        return base * power(base, exponent - 1);
    }
}

int main() {
    double base;
    int exponent;
    printf("Enter base and exponent: ");
    scanf("%lf %d", &base, &exponent);
    printf("Result: %.2f\n", power(base, exponent));
    return 0;
}
