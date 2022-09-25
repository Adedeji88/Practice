/* Convert Celsius degrees to Farenheit */
#include <stdio.h>
int main(void)
{
    float b = 1.8;
    float farh, cels;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &cels);

    farh = (cels * b) + 32;

    printf("Temperature in Farenheit is: %.4f farenheit", farh);
    return(0);
}