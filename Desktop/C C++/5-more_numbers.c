#include "main.h"
/**
 * main - print 10 times the numbers, from 0 to 14
 * 
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
    int i, j;

    for (i = 0; i <= 9; i++)
    {
        for(j = 0; j <= 14; j++)
        {
            if (j > 9)
            {
            _putchar(j/10 + '0');
            }
            _putchar(j % 10 + '0');
        }
        _putchar('\n');
    }

    return(0);
}