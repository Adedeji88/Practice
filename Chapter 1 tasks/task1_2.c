/* Area of a circle */
#include <stdio.h>
int main(void)
{
    float area, r; /* r is radius of the circle */
    float pi = 3.14159;

    printf("Enter the value of r: ");
    scanf("%f", &r);

    area = pi * r * r;

    printf("Area of the circle is: %.3f square unit", area);
    return(0);
}
