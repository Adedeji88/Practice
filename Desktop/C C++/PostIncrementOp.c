#include <stdio.h>

int main()
{
    int i, j;
        i = 10;
        j = 5+ i++; //Compute 5 + i, _then_ increment i
    
    printf("%d and %d\n", i, j); //Prints 11, 15

}