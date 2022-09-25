/* Area of a circle */
#include <stdio.h>
const float pi = 3.14
int main(void)
{
    float area, r; /* r is radious of the circle */

    printf("Enter the value of r: ");
    scanf("%d", r);

    area = pi * r * r;

    printf("Area of the circle is: %d square unit", area);
    return(0);
}
