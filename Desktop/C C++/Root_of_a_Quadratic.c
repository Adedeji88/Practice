#include <stdio.h>
#include <math.h>

/**
 * main - computing roots of a quadratic equation
 * Return:Always 0
 */

int main(void)
{
    float a, d, x1, x2;
    float b, c;

    printf("Enter the values of a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = sqrt((b * b) - 4 * a * c);
    x1 = (-b + d)/ (2 * a);
    x2 = (-b - d)/ (2 * a);

    printf("x1 and x2 are: %.4f %.4f", x1, x2);
    return(0);
}