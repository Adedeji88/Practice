#include <stdio.h>
#define KMS_PER_MILE 1.609
/**
 * main - converts distance in miles to
 * kilometers in interactive mode
 * 
 * Return: Always 0
 */
int main(void)
{
    double miles, kms;

    printf("Enter the distance in miles: ");
    scanf("%lf", &miles);

    kms = KMS_PER_MILE * miles;

    printf("That equals %f kilometers.\n", kms);

    return(0);
}
