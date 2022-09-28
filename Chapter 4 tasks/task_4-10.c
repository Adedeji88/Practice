#include <stdio.h>

/**
 * main - check if a number is prime
 * Return: Always 0
 */

int main(void)
{
    int num;

    printf("Enter the value of num: ");
    scanf("%d", &num);

    if((num % num) == 0 && (num / num) == 1)
    {
        printf("num %d is prime", num);
    }
    else
    {
        printf("num %d is not prime", num);
    }
    return(0);
}
