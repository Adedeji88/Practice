#include <stdio.h>
void myFunction(char name[]) {
    printf("Hello, %s", name);
}

int main() {
    myFunction("Joe\n");
    myFunction("Joel\n");
    myFunction("Ade");

return 0;
}
 