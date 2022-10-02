#include <stdio.h>
int main() {
    int x, y, z;
    printf("Enter the values of x, y and z: ");
    scanf("%d, %d, and %d", &x, &y, &z);

if (x < y < z) {
    printf("z is the greatest number.", z);
} else { 
    printf("z is not the greatest number.", y, z);
    return 0;
}
}
