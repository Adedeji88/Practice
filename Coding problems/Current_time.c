#include <stdio.h>
#include <time.h>

/**
 * main - Display current time and date
 * Return: Always 0
 */

int main(void)
{
    time_t t; /* not a primitive datatype */
    time(&t);

    printf("Current time and date is %s", ctime(&t));
    return(0);
}