#include <stdio.h>
/**
 * main - Check whether an int is prime
 * 
 * Return: Always o
 */
int main(void)
{
    int i, n, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    /* 0 and 1 are not prime numbers */
    /* change flag to 1 for non-prime number */
    if(n == 0 || n == 1)
        flag = 1;
    
    for(i = 2; i <= n / 2; ++i)
    {
    /* if n is divisible by i, then n is not prime */
    /* change flag to 1 for non-prime number */
        if(n % i == 0)
        { 
            flag = 1;
            break;
        }
    }
    
    /* flag is 0 for prime numbers */
    if(flag == 0)
        printf("%d is prime.", n);
    else
        printf("%d is non-prime.", n);
    
    return(0);
}