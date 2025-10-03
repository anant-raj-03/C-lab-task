// WAP to convert octal to binary, decimal and hexadecimal.
#include <stdio.h>
#include <math.h>

int main() {
    int octal, decimal = 0, binary = 0, hexadecimal = 0, remainder, base = 1;
    printf("Enter an octal number: ");
    scanf("%d", &octal);
    int temp = octal;
    while (temp != 0) {
        remainder = temp % 10;
        decimal += remainder * base;
        temp /= 10;
        base *= 8;
    }
    temp = decimal;
    base = 1;
    while (temp != 0) {
        remainder = temp % 2;
        binary += remainder * base;
        temp /= 2;
        base *= 10;
    }
    temp = decimal;
    base = 1;
    while (temp != 0) {
        remainder = temp % 16;
        if (remainder < 10) {
            hexadecimal += remainder * base;
        } else {
            hexadecimal += (remainder - 10 + 'A') * base;
        }
        temp /= 16;
        base *= 10;
    }

    printf("Decimal equivalent: %d\n", decimal);
    printf("Binary equivalent: %d\n", binary);
    printf("Hexadecimal equivalent: %X\n", hexadecimal);

    return 0;
}
