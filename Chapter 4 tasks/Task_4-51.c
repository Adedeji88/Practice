#include <stdio.h>

/**
 * main - print first 10 natural numbers
 * Return: Always 0
 */
 int main(void)
 {
    int i = 0; 
    int sum = 0;

    while(i <= 10)
    {
        sum = sum + i;
        i++;
    }
    printf("Sum of the first 10 natural numbers is: %d", sum);
    return(0);
 }