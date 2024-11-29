#include <stdio.h>

int main() {
    float b, h, a;

    printf("Enter the breath and height of the triangle: ");
    scanf("%f %f", &b, &h);

    a = 0.5 * b * h;

    printf("Area of triangle is %f", a);
    return 0;
}