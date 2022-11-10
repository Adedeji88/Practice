#include <stdio.h>
/**
 * main - print all negative numbers 
 * in an array
 * 
 * Return: Always 0
 */
int main(void)
{
    int arr[10];
    int i, n;

    printf("Enter the values of n (10 numbers): ");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("The entered numbers: ");
    for(i = 0; i < 10; i++)
    {
        printf("%d", arr[i]);
        if(i == 9)
        {
            break;
        }
        putchar(',');
        putchar(' ');
    }
    putchar('\n');

    printf("The negative numbers: ");
    for(i = 0; i < 10; i++)
    {
        if(arr[i] < 0)
        {
            printf("%d", arr[i]);
            putchar(',');
            putchar(' ');
        }
    }
    putchar('\n');
    return(0);

}