#include "main.h"
/**
 * draw a straight line in the terminal - main function
 * 
 * Return: Always 0 (Success) 
 * 
 */
void print_line(int n)
{
    int i;

    for (i = 0; i <= n; i++)
    {
        _putchar('_');

        if(n <= 0)
        {
            _putchar('\n');
        }
    }

    return(0);
}