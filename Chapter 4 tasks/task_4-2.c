#include <stdio.h>
const int NUM = 10;
/**
 * main - print multi table in reverse
 * Return: Always 0
 */

int main(void)
{
    int i, j;
    int prod, r, s;

    for(i = 1; i <= NUM; i++)
    {
        for(j = 1; j <= NUM; j++)
        {
            prod = i * j;
            r = prod % 10;
            s = prod / 10;
            print("");
            putchar(' ');
        }
        putchar('\n');
    }
    putchar('\t');
    return(0);
}