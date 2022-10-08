#include <stdio.h>
#include <math.h>
int main(void)
{
	double n, res;
	
	printf("Enter the value of n: ");
	scanf("%lf", &n);
	
	res = pow(n, 3);
	
	printf("%.4lf", res);
	
	return(0);
}