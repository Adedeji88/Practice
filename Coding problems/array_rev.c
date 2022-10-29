#include <stdio.h>
/**
 * main - reverse an array
 * 
 * Return: Always 0.
 */
int main(void)
{
    int i, arr[5];

    printf("Enter the array element: ");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The elements of the original array: ");

    for(i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
        if(i == 4)
            break;
        putchar(',');
        putchar(' ');
    }
    putchar('\n');

    printf("The elements of the reversed array: ");

    for(i = 4; i >= 0; i--)
    {
        printf("%d", arr[i]);
        if(i == 0)
            break;
        putchar(',');
        putchar(' ');
    }
    putchar('\n');

    return(0);
}