#include <stdio.h>

/**
 *main - Entry point 
 *Return: Always 0 (Success)   
 */

int main(void)
{
    char alfa = 'a';

    for(alfa = 'a'; alfa <= 'z'; alfa++)
    {
        putchar(alfa);
        putchar('\n');
    }

    return (0); 
}