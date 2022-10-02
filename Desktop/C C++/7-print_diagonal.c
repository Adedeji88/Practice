#include "main.h"
/**
 * main - draw a diagonal line 
 * 
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
    int i, j;

    if(n <= 0)
    {
        _putchar('\n');
    }
    else
    {
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < 1; j++)
            {
                _putchar(' ');
            }
            _putchar('\\');
            _putchar('\n');
        }
    }
}