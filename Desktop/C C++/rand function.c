#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    int i;
    // time(NULL) very likely returns the number of seconds since
    // January 1, 1970:

    srand(time(NULL));

    for (i = 0; i < 5; i++)
        printf("%d\n", rand());
}