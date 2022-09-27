#include <stdio.h>

/**
 * main - find the sum of first 10 natural numbers
 * Return: Always 0
 */

int main(void)
{
    int sum = 0;

    for(int i = 0; i <= 10; i++)
    {
        sum =  sum + i; 
    }
    printf("Sum of first 10 natural numbers is: %d", sum);
}