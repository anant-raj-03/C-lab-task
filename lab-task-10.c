//WAP to multiply two number using a function multiply().
// Print values for multiply(a,b), multiply(7,8), multiply (a+b,a-b) and multiply(6, sum(a,b)).
#include <stdio.h>


int multiply(int x, int y) {
    return x * y;
}

int sum(int a, int b) {
    return a + b;
}

int main() {
    int a = 15, b = 10;

    printf("multiply(a,b) = %d\n", multiply(a, b));
    printf("multiply(7,8) = %d\n", multiply(7, 8));
    printf("multiply(a+b,a-b) = %d\n", multiply(sum(a, b), a - b));
    printf("multiply(6, sum(a,b)) = %d\n", multiply(6, sum(a, b)));

    return 0;
}   