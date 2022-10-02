#include <stdio.h>

int main(void)
{
    int i, j, n;

    printf("Enter the value of n: ");
    scanf("%d", n);

    if(n <= 0)
    {
        putchar('\n');
    }
    else
    {
        for(i = 0; i < n; i--)
        {
            for(j = 0; j < 1; j++)
            {
                putchar(' ');
            }
            putchar('\\');
            putchar('\n');
        }
    }
    return(0);
}