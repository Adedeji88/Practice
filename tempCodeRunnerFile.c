/* Volume of a cylinder */
#include <stdio.h>
int main(void)
{
    float area, vol, r, h; /* r and h are radius and height of cylinder */
    float pi = 3.14159;

    printf("Enter the value of r: ");
    scanf("%f", &r);

    area = pi * r * r;
    vol = area * h;

    printf("Volume of the cylinder is: %f square unit", vol);
    
    return(0);
}