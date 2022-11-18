#include <unistd.h>
#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

/**
 * main -
 * 
 */

int main(void)
{
    int x = 1;

    printf("Enter an integer: ");
    scanf("%d", &x);

    if (x == 1)
    {
        alarm(2);
    }
    else
    {
        exit(0);
    }
    return(0);
}