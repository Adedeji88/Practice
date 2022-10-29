#include <stdio.h>
/**
 * main - copy into an array into another using pointer
 * 
 * Return: Always 0
 */
int main(void)
{
    int arr1[5] = { 1, 2, 3, 4, 5};
    int i, *p = arr1;

    int length = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[length]; 
    int *q = arr2;

        q = p;

    printf("The elements of the original array: ");

    for(i = 0; i < length; i++)
    {
        printf("%d", *(p+i));
        if(i == length)
            break;
        putchar(',');
        putchar(' ');
    }
    printf("\n");

    printf("The elements of the new array: ");

    for(i = 0; i < length; i++)
    {
        printf("%d", *(q+i));
        if(i == length)
            break;
        putchar(',');
        putchar(' ');
    }
    return(0);
}