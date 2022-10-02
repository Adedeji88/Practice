#include <stdio.h>
void myFunction(char name[], int age) {
    printf("Hello, %s, you are %d years old.\n", name, age);
}

int main () {
    myFunction("Ade", 32);
    myFunction("Tola", 12);
    myFunction("Vic", 45);

return 0;
}