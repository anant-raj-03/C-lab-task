// WAP  to find the average of n = 40 numbers using arrays. Convert the type of array using type conversion.
#include <stdio.h>
int main() {
    float numbers[40];
    float sum = 0.0;

    printf("Enter 40 numbers:\n");
    for (int i = 0; i < 40; i++) {
        scanf("%f", &numbers[i]);
    }

    for (int i = 0; i < 40; i++) {
        sum += numbers[i];
    }

    float average = sum / 40;
    printf("The average is: %.2f\n", average);

    return 0;
}