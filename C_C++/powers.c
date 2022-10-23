#include <stdio.h>
#include <math.h>
/**
* main - Compute powers of a number
* Return: Always 0
*/
int main(void)
{
	double N, first_power, second_power, third_power;
	
	printf("Enter the value of integer N: ");
	scanf("%lf", &N);
	
	first_power = pow(N, 1);
	second_power = pow(N, 2);
	third_power = pow(N, 3);
	
	printf("The first, second, and third powers = %lf, %lf, %lf.", first_power, second_power, third_power);
	
	return(0);
}