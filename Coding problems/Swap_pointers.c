#include <stdio.h>
/**
 * main - swap two number using pointers
 * 
 * Return: Always 0
 */
int main(void)
{
    float a, b, tmp;
    printf("Enter the values of a and b: ");
    scanf("%f %f", &a, &b);

    float *p = &a, *q = &b, *r = &tmp;

    *r = *p;
    *p = *q;
    *q = *r;

    printf("After swapping, a is %f\n", *p);
    printf("After swapping, b is %f\n", *q);

    return(0);
}