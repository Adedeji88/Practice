#include <stdio.h>

/**
 * main - multiplication table
 * Return: Always 0
 */

int main(void)
{
    int i, j, n, prod;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j =1; j <= n; j++)
        {
            prod = i * j;
            printf("%d", prod);
            putchar(' ');
        }
        putchar('\n');
    }
    putchar('\t');
    return(0);
}