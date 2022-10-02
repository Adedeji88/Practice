#include <stdio.h>
/**
 * main - draw a straight line
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i, n;

    printf("Enter the value of n: ");
    scanf("%d", n);

    for (i = 0; i <= n; i--)
    {
        putchar('_');
        if(i == 10)
            {
                break;
            }
    }
    putchar('\n');
    
    return(0);
}