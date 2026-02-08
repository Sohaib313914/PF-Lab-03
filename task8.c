#include <stdio.h>

int main() {
    int num;
    float decimal;
    char ch;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Enter a float: ");
    scanf("%f", &decimal);

    printf("Enter a character: ");
    scanf(" %c", &ch);

    printf("You entered: %d, %.2f, %c\n", num, decimal, ch);

    return 0;
}
