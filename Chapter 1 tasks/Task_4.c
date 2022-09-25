/* Computing simple interest */
#include <stdio.h>
int main(void)
{
    float SI, P, R, T;

    printf("Enter the values of P, R, and T: ");
    scanf("%f %f %f", &P, &R, &T);

    SI = P * R * T * 0.01;

    printf("Simple interest is: %.3f naira", SI);
    return(0);
}