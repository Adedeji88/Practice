#include <stdio.h>
#include <stdlib.h>
#include <time.h>  //For the time() call

int main()
{
    int i;
    
    srand(time(NULL));

    for (i = 0; i < 5; i++)
        printf("%d\n", rand(), %32);

}