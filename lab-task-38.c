// WAP to convert binary to decimal, octal and hexadecimal.
#include <stdio.h>
#include <math.h>

int main() {
    int binary, decimal = 0, octal = 0, hexadecimal = 0, remainder, base = 1;
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    int temp = binary;
    while (temp != 0) {
        remainder = temp % 10;
        decimal += remainder * base;
        temp /= 10;
        base *= 2;
    }
    temp = decimal;
    base = 1;
    while (temp != 0) {
        remainder = temp % 8;
        octal += remainder * base;
        temp /= 8;
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
    printf("Octal equivalent: %d\n", octal);
    printf("Hexadecimal equivalent: %X\n", hexadecimal);

    return 0;
}
