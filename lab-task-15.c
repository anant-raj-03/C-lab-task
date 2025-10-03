/*  Develop a recursive function GCD (num1, num2) that accepts two integer arguments. 
Write a C program that invokes this function to find the greatest common divisor of two given integers.
*/
#include <stdio.h>

int GCD(int num1, int num2) {
    if (num1 == 0){
        return num2;
    }else if (num2 == 0){
        return num1;
    }else{
    return GCD(num2, num1 % num2);
    }
}
int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    int gcd = GCD(a, b);
    printf("GCD:%d", gcd);
    return 0;
}