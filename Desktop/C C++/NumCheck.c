#include <stdio.h>

int main(void)
{
    int m;
    int n;

    printf("Enter the values of m and n: ");
    scanf("%d %d", &m, &n);

    if(m > 0 && n > 0)
    {
        printf("the first number is positive\n");
        printf("the second number is positive\n");
    }
    else if(m < 0 && n < 0)
    {
        printf("the first number is negative\n");
        printf("the second number is negative\n");
    }
    else if(m > 0 && n < 0)
    {
        printf("the first number is positive\n");
        printf("the second number is negative\n");
    }
    else if(m < 0 && n > 0)
    {
        printf("the first number is negative\n");
        printf("the second number is positive\n");
    }
    else
    {
        printf("neither positive nor negative\n");
    }

    return (0);
}
