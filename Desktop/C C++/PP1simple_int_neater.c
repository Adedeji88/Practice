#include <stdio.h>

int main() {
float principal, rate, time, simple_interest;

printf("Type the value of principal, rate, and time: %f");
scanf("%f, %f, and %f", &principal, &rate, &time);

simple_interest = principal * rate * time * 0.01;
printf("Simple interest is: %f", simple_interest);

return 0;
}