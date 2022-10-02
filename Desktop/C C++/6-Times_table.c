#include <stdio.h>

int main(void)
{
    int i, j, prod;

    for (i = 0; i <= 6; i++)
    {
        for (j = 0; j <= 6; j++)
        {
            prod = i * j;

            if(prod == 0)
            {
                putchar('0');
                putchar(',');
                putchar(' ');
                putchar(' ');
            }
            else if(prod < 6)
            {
                putchar(prod + '0');
                putchar(',');
                putchar(' '); 
            }
            else
            {
                putchar(prod / 10 + '0');
                putchar(prod % 10 + '0');
                putchar(',');
                putchar(' ');
            }
        }
        putchar('\t');
    }
    putchar('\t');

    return(0); 
}