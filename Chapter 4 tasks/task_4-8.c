#include <stdio.h>

/**
 * main - computing factorial of a number
 * Return: Always 0
 */

int main(void)
{
    long int fact;
    int i, n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 1; i < n; i++)
    {
        fact = n * (n - i);
    }
    printf("Factorial is: %d", fact);

    if(n == 0)
    {
        return 1;
    }
    return(0);
}