#include <stdio.h>
/**
 * main - insert 200 in a given array
 * 
 * Return: Always 0
 */
int main(void)
{
    int LA[6] = {100, 2, 3, 45, 22, 8};
    int item = 200, k = 2, n = 6;
    int i, j = n;

    printf("The elements of the original array: \n");

    for(i = 0; i < 6; i++)
    {
        printf("LA[%d] = %d\n", i, LA[i]);
    }
    n = n + 1;
    while(j >= k)
    {
        LA[j+1] = LA[j];
        j = j-1;
    }
    LA[k] = item;

    printf("The array elements after insertion: \n");

    for(i = 0; i < n; i++)
    {
        printf("LA[%d] = %d\n", i, LA[i]);
    }
    return(0);
}