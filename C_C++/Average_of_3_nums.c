#include <stdio.h>
int main(void)
{
	double n1, n2, n3, avg;
	printf("Enter the values of n1, n2, and n3: ");
	scanf("%lf %lf %lf", &n1, &n2, &n3);
	
	avg = (n1 + n2 + n3) / 3.0;
	
	printf("The average of the three numbers = %lf", avg);
	
	return(0);
}
