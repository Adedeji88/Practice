#include <stdio.h>

int main()
{
    int i, j;
        i = 17;
        j = 6- i--; //Compute 6 - i, _then_ decrement i
    
    printf("%d and %d\n", i, j); //Prints 16 and -11
}