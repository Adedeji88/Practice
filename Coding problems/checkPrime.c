#include <stdio.h>

/**
 * checkPrime - function to check if number is prime
 * 
 * Return: Always 0.
 */

int checkPrime(int n)
{
    int i, flag = 0;

    if((n == 1) || (n == 0))
    {
        flag = 1; /* Not a prime */
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
    return(n);
}

int main(void)
{
    int m, pass = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &m);

    pass = checkPrime(m);

    if(pass == 0)
        printf("%d is a prime", m);
    else
        printf("%d is not a prime", m);
    
    return(0);
}