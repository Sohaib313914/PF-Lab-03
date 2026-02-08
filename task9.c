#include <stdio.h>

int main() {
    double value;

    printf("Enter a double value: ");
    scanf("%lf", &value);

    printf("Default: %lf\n", value);
    printf("2 Decimal: %.2lf\n", value);
    printf("5 Decimal: %.5lf\n", value);
        return 0;
}
