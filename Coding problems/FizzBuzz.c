#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *arr;
    int ar[10001], i, n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    arr = (int *) malloc(sizeof(int) * 15000);

    for (i = 1; i <= n; i++)
    {
        if((i % 3) == 0 && (i % 15) != 0)
        {
            printf("a[%d] = Fizz", ar[i]);
        }
        else if((i % 5) == 0 && (i % 15) != 0)
        {
            printf("a[%d] = Buzz", ar[i]);
        }
        else if((i % 15) == 0)
        {
            printf("a[%d] = FizzBuzz", ar[i]);
        }
        else
        {
            printf("%d", ar[i]);
        }
        putchar(' ');
    }

    free(arr);
    return(0);
}