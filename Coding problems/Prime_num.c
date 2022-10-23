#include <stdio.h>

/**
 * main - A program to check whether num is prime
 * 
 * Return: Always 0.
 */

int main(void)
{
    int i, n, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if((n == 0) || (n == 1))
    {
        flag = 1;
    }

    for(i = 2; i <= n / 2; ++i)
    {
        if((n % i) == 0)
        {
            flag = 1;
        }
        else
        {
            flag = 0;
        }
    }
    if(flag == 1)
    {
        printf("%d is not a prime number.", n);
    }
    else
    {
        printf("%d is a prime number.", n);
    }

    return(0);
}