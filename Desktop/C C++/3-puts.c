#include "main.h"
/**
* _puts - printing a str, followed by a new line, to stdout
* @str: str to print
*/
void _puts(char *str)
{
    while(*str != '\0')
    {
        _putchar(*str++);
    }
    _putchar('\n');
}