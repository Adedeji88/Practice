#include <stdio.h>
int square (int x) {
    return x * x;
}

int main() {
    printf("%d\n", square(2));
    printf("%d\n", square(4));
    printf("%d\n", square(6));
}