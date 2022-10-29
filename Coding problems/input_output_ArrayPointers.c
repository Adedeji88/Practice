#include <stdio.h>
/**
 * main - input and output array elements 
 * using a pointer
 * 
 * Return: Always 0
 */
int main(void)
{
    int arr[5], *p = arr;
    int i; 

    printf("Enter 5 integers (elements): ");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Elements of the array: ");

    for(i = 0; i < 5; i++)
    {
        printf("%d", *(p+i));
        if(i == 4)
            break;
        putchar(',');
        putchar(' ');
    }
    putchar('\n');

    return(0);
}