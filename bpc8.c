#include <stdio.h>

int main() {
    double base, exponent, result = 1.0;

    printf("Enter the base number: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%lf", &exponent);

    // Calculate the power
    while (exponent != 0) {
        result *= base;
        --exponent;
    }

    printf("The result is %.2lf\n", result);

    return 0;
}
