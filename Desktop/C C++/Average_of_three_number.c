#include <stdio.h>
int main(void)
{
    double n1, n2, n3, avg, sum;
    printf("Enter the values of n1, n2, and n3: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    sum = n1 + n2 + n3;
    avg = sum / 3;

    printf("Sum of the three numbers = %0.4lf\n", &sum);
    printf("Average of the three numbers = %0.4lf", &avg);

    return(0);
}