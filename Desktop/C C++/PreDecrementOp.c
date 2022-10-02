#include <stdio.h>

int main()
{
    int i, j;
        i = 17;
        j = 6- --i; //Decrement i, _then_ compute 6 - i

    printf("%d and %d\n", i, j); //Prints 16 and -10 

}