#include <stdlib.h> /* for rand() and srand() */
#include <time.h>   /* for time() */
#include <stdio.h>  /* for printf() */

/** main - Entry point
 *Return: Always 0 (Success)
*/

int main(void)
 {
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    printf("Last digit of %i is %i ", n, (n % 10));

    if((n % 10) == 0)
    {
        printf("0\n");
    }
    else if((n % 10) > 5)
    {
        printf("greater than 5\n");
    }      
    else
    {
        printf("less than six and not 0\n");
    }
    
    return (0);
 }  