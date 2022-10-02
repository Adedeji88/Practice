#include "main.h"
/**
 * check for uppercase character - main function
 * 
 * Return: 1 if c is uppercase
 * 
 * Return: 0 if otherwise
 */
int _isupper(int c)
{
    if(c >= 'A' && c <= 'Z')
    {
        return (1);
    }
    return (0);
}