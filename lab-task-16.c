// Develop a recursive function FIBO (num) that accepts an integer argument. Write a C program that invokes this function to generate the Fibonacci sequence up to num.
#include <stdio.h>

void FIBO(int num1, int num2, int count, int limit) {
    if (count > limit) {
        return;
    }
    printf("%d ", num1);
    FIBO(num2, num1 + num2, count + 1, limit);
}

int main() {
    int n;
    printf("Enter the limit for Fibonacci sequence: ");
    scanf("%d", &n);
    printf("Fibonacci sequence up to %d: ", n);
    FIBO(0, 1, 1, n);
    return 0;
}