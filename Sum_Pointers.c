#include <stdio.h>
/**
 * main - Add two numbers using pointers
 * 
 * Return: Always 0
 */
int main(void)
{
    float a, b;
    printf("Enter the values of a and b: ");
    scanf("%f %f", &a, &b);
    
    float *p = &a, *q = &b;

    printf("Sum is %f\n", ((*p) + (*q)));

    return(0);
}