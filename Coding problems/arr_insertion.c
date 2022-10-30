#include <stdio.h>
/**
 * main - insert 12 in a given array
 * 
 * return: Always 0
 */
int main(void)
{
    int LA[5] = {10, 4, 5, 6, 7}; /* LA stands for Linear Array */
    int item = 12, k = 4, n = 5;
    int i, j = n;

    printf("The elements of the original array: \n");

    for(i = 0; i < 5; i++)
    {
        printf("LA[%d] = %d\n", i, LA[i]);
    }

    n = n + 1;
    while(j >= k)
    {
        LA[j+1] = LA[j];
        j = j - 1;
    }

    LA[k] = item;
    printf("The array elements after insertion: \n");

    for(i = 0; i < n; i++)
    {
        printf("LA[%d] = %d\n", i, LA[i]);
    }
    
    return(0);
}