#include <stdio.h>
/**
 * main - input and print array elements 
 * using a pointer
 *
 *  Return: Always 0 
 */
int main(void)
{
    int i, arr[5];
    int *p = arr;

    for(i = 0; i < 5; i++)
    {
        printf("Enter an integer: ");
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 5; i++)
    {
        printf("%d", *(p+i));
        if(i == 4)
            break;
        putchar(',');
        putchar(' ');
    }
    return(0);
}