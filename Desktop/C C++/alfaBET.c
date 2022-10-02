#include <stdio.h>

/**
 *main - Entry point 
 *Return: Always 0 (Success) 
 */

int main(void)
{
    char alfa = 'a';
    char ALFA = 'A';

    for(alfa = 'a'; alfa <= 'z'; alfa++)
    {
        putchar(alfa);
    }
    for(ALFA = 'A'; ALFA <= 'Z'; ALFA++)
    { 
        putchar(ALFA);
    }
    putchar('\n');

    return (0);
}