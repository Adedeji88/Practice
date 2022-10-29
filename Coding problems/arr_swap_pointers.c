#include <stdio.h>
/**
 * main - swap two arrays using pointers
 * 
 * Return: Always 0
 */
int main(void)
{
    int i, arr[5];
    int *p = arr;
    int arr2[5];
    int *q = arr2;
    int tmp[5];
    int *r = tmp;

    printf("Enter the elements of the array: ");
    
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

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
    putchar('\n');

    return(0);
}