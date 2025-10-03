/* Develop a recursive and non-recursive function FACT(num) to find the factorial of a number, n!, defined by FACT(n) = 1, if n = 0.
Otherwise, FACT(n) = n * FACT(n-1). Using this function, write a C program to compute the binomial coefficient. 
Tabulate the results for different values of n and r with suitable messages.
*/
#include <stdio.h>
int FACT_recursive(int n) {
    if (n == 0)
        return 1;
    else
        return n * FACT_recursive(n - 1);
}
int FACT_non_recursive(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}int binomial_coefficient(int n, int r) {
    return FACT_non_recursive(n) / (FACT_non_recursive(r) * FACT_non_recursive(n - r));
}
int main() {
    int n, r;

    printf("Enter values for n and r (n >= r): ");
    scanf("%d %d", &n, &r);

    if (n < r) {
        printf("Invalid input. Please ensure n >= r.\n");
        return 1;
    }

    printf("Binomial Coefficient C(%d, %d) = %d\n", n, r, binomial_coefficient(n, r));

    return 0;
}   