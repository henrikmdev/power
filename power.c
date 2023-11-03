#include <stdio.h>

double power(double base, int exponent) {
    if (exponent == 0) {
        return 1.0;
    } else if (exponent < 0) {
        return 1.0 / (base * power(base, -exponent - 1));
    } else {
        double result = 1.0;
        for (int i = 0; i < exponent; i++) {
            result *= base;
        }
        return result;
    }
}

int main(void) {
    printf("%lf\n", power(2,200));
}