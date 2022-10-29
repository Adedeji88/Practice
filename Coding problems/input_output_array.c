#include <stdio.h>
/**
 * main - input and print array elements
 * 
 * Return: Always 0
 */
int main(void)
{
    int i, arr[5];

    printf("Enter 5 integers: ");
    
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

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
    return(0);
}