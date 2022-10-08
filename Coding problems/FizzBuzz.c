#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int *j = malloc(sizeof(int) * 15000);
    j = &i;

    for (i = 1; i <= n; i++)
    {
        if((i % 3) == 0 && (i % 15) != 0)
        {
            printf("Fizz", i);
        }
        else if((i % 5) == 0 && (i % 15) != 0)
        {
            printf("Buzz", i);
        }
        else if((i % 15) == 0)
        {
            printf("FizzBuzz", i);
        }
        else if(i < 9)
        {
            putchar(i + '0');
        }
        else if((i > 9) && (i < 99))
        {
            putchar((i / 10) + '0');
            putchar((i % 10) + '0'); 
        }
        else if((i > 99) && (i < 999))
        {
            printf("%d", i);
        }
        else if((i > 999) && (i < 9999))
        {
            printf("%d", i);
        }
        putchar(' ');
    }

    free(j);
    return(0);
}