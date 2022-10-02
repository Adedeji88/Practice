#include <stdio.h>

int main(void)
{
    int m, n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if(n > 0)
    {
        printf("positive\n");
    }
    else if(n < 0)
    {
        printf("negative\n");
    }
    else
    {
        printf("neither positive nor negative\n");
    }

    printf("Enter the value of m: ");
    scanf("%d", &m);

    if(m > 0)
    {
        printf("positive\n");
    }
    else if(m < 0)
    {
        printf("negative\n");
    }
    else
    {
        printf("neither positive nor negative\n");
    }

    return (0);
}