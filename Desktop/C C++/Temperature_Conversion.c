#include <stdio.h>

int main() {
float temp_in_celsius, temp_in_farenheit; //temp_in_celsius = temperature in Celsius 
                                         //temp_in_farenheit = temperature in Farenheit
printf("Type the temperature value in Celsius: ");
scanf("%d", &temp_in_celsius);

temp_in_farenheit = (1.8 * temp_in_celsius) + 32;
printf("Temperature in Farenheit is: %f", temp_in_farenheit);

return 0;
}
