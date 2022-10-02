#include <stdio.h>

int main() {
float base, height, area_of_triangle;

   printf("Type the value of base and press Enter: \n");
   scanf("%f", &base);

   printf("Type the value of height and press Enter: \n");
   scanf("%f", &height);

   area_of_triangle = 0.5 * base * height;

   printf("Area of triangle is: %f", area_of_triangle);
 
   return 0;
}