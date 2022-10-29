#include <stdio.h>
/**
 * main - copy one array into another
 * 
 * Return: Always 0
 */
int main(void)
{
    int a1[5] = {2, 4, 5, 6, 8};
    int i;

    int length = sizeof(a1) / sizeof(a1[0]);
    int a2[length];

    for(i = 0; i < length; i++)
    {
        a2[i] = a1[i];
    }

    printf("The elements of the original array: ");

    for(i = 0; i < length; i++)
    {
        printf("%d", a1[i]);
        if(i == length)
            break;
        putchar(',');
        putchar(' ');
    }
    printf("\n");

    printf("The elements of the new array: ");

    for(i = 0; i < length; i++)
    {
        printf("%d", a2[i]);
        if(i == length)
            break;
        putchar(',');
        putchar(' ');
    }
    return(0);
}