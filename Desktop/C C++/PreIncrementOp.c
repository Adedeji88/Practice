#include <stdio.h>

int main()
{
    int i, j;
        i = 10;
        j = 5+ ++i; //increment i, _then_ compute 5 + i

    printf("%d and %d\n", i, j); //Prints 11 and 16
}