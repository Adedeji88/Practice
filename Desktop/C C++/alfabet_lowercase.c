#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success) 
 */

int main(void)
{
    char alfa = 'a';

    while(alfa <= 'z') 
    {
        putchar(alfa);
        alfa++;
        putchar('\n');
    }

    return (0);
}