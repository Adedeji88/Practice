#include <stdio.h>

int main() {
float principal, rate, time, interest; 

   printf("Type the value of principal and press Enter: \n");
   scanf("%f", &principal);

   printf("Type the value of rate and press Enter: \n");
   scanf("%f", &rate);

   printf("Type the value of time and press Enter: \n");
   scanf("%f", &time);

   interest = 0.01 * principal * rate * time;

   printf("interest is: %f", interest);
 
   return 0;
}