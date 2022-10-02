#include <stdio.h>

/**
 *main - Entry point 
 *Return: Always 0 (Success) 
 */

int main(void)
{
    char alfa = 'a';
    char ALFA = 'A';

    for(alfa = 'a', ALFA = 'A'; alfa <= 'z', ALFA <= 'Z'; alfa++, ALFA++)
    {
        putchar(alfa);  
        putchar(ALFA);
    }
    putchar('\n');

    return (0);
}