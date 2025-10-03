// WAP to compute positive,negative and zero numbers from an inputs.
#include <stdio.h>
int main() {
    int num, positive = 0, negative = 0, zero = 0;

    printf("Enter numbers:\n");
    while (1) {
        scanf("%d", &num);
        if (num == 0) {
            zero++;
            break;
        } else if (num > 0) {
            positive++;
        } else {
            negative++;
        }
    }
    printf("Positive numbers: %d\n", positive);
    printf("Negative numbers: %d\n", negative);
    printf("Zero numbers: %d\n", zero);

    return 0;
}