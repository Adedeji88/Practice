#include <stdio.h>

int main(void)
{
    int i;

    for(i = 1; i <= 100; i++)
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
        else if(i > 9)
        {
            putchar(i / 10 + '0');
            putchar(i % 10 + '0');
        }
        putchar(' ');
    }
    return(0);
}