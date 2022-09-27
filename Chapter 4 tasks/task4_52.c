#include <stdio.h>

/**
 * main - print first 10 natural numbers
 * Return: Always 0
 */

int main(void)
{
    int i = 0;
    int sum = 0;

    do 
    {
        sum = sum + i;
        i++;
    }
    while(i <= 10);
        printf("The sum of first 10 natural numbers is: %d", sum);
    return(0);
}
