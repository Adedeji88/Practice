#include <stdio.h>
int myFunction(int x, int y) {
    return x + y;
}

int main () {
    printf("Result is: %d", myFunction(3, 5));
   
    return 0;
}