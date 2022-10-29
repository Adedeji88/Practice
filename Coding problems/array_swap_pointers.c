#include <stdio.h>
/**
 * main - swap two arrays using pointers
 * 
 * Return: Always 0
 */
int main(void)
{
    int i, arr[5] = {23, 45, 66, 67, 99};
    int *p = arr;
    int arr2[5], *q = arr2;
    int tmp[5], *r = tmp;

    *r = *p;
    *p = *q;
    *q = *r;

    printf("The elements of arr: ");

    for(i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
        if(i == 4)
            break;
        putchar(',');
        putchar(' ');
    }
    putchar('\n');

    printf("The elements of arr2: ");

    for(i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
        if(i == 4)
            break;
        putchar(',');
        putchar(' ');
    }

    return(0);
}