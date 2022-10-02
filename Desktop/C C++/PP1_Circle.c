#include <stdio.h>

int main() {
    float radius, area_of_circle, circumference_of_circle;
    float pi = 3.14159;

    printf("Type the value of radius and press Enter: ");
    scanf("%f", &radius);

    area_of_circle = pi * radius * radius;

    printf("Area of the circle is: %f\n", area_of_circle);

    circumference_of_circle = 2 * pi * radius;

    printf("Circumference of the circle is: %f", circumference_of_circle);
    return 0;
}