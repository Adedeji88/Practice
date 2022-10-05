#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int i, sum = 0; 
    if(argc != 1)
        putchar('0');
        putchar('\n');
    for(i = 1; i < argc; i++)
    {
        sum = sum + atoi(argv[i]);
        printf("%d", sum);
    }
    return(0);
}