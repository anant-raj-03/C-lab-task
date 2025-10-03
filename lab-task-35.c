// WAP to find circumference and area of circle.
#include <stdio.h>
#define PI 3.14
int main() {
    float radius, circumference, area;
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    circumference = 2 * PI * radius;
    area = PI * radius * radius;
    printf("Circumference: %.2f\n", circumference);
    printf("Area: %.2f\n", area);
    return 0;
}