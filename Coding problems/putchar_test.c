#include <stdio.h>

int main(void)
{
    int i, n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 100; i <= n; i++)
    {
        putchar((i /10) + '0');
        putchar((i % 10) + '0');
        putchar(' ');
    }
    return(0);
}
    