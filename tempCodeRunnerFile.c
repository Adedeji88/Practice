#include <stdio.h>
#include <math.h>

/**
 * main - computing roots of a quadratic equation
 * Return:Always 0
 */

int main(void)
{
    float a, d, x;
    float b, c;

    printf("Enter the values of a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = sqrt((b * b) - 4 * a * c);
    x = (-b +- d)/ (2 * a);

    printf("x is: %.4f", x);
    return(0);
}