#include <stdio.h>

int main () {
float base, height, area_of_triangle;

    printf("Type the value of base and height and press Enter: ");
    scanf("%f and %f", base, height);

    area_of_triangle = 0.5 * base * height;
    printf("Area of triangle is: %f", area_of_triangle);
    
    return 0;
}