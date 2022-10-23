#include <stdio.h>
int main(void)
{
    int i, j, prod;

    for(i = 1; i <= 10; i++)
    {
        for(j = 10; j > 0; j--)
        {
            prod = i * j;
            printf("%d\n", prod);
        }
    }
}