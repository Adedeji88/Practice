#include <stdio.h>

/**
 * main - computing factorial of a number
 * Return: Always 0
 */

int main(void)
{
    int i, n;
    unsigned long long fact = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);
    i = 1;

    while(i <= n)
    {
        fact = fact * i;
        i++;
    }
    printf("Factorial of %d = %llu", n, fact);
    
    if(n < 0)
    {
        printf("Error! The factorial of a negative number doesn't exist.");
    }
    return(0);
}