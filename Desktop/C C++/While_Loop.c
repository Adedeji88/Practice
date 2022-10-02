#include <stdio.h>
int main() {
int i = 0;

while (i < 4) {
    printf("%d\n", i);
    i++;  //Increment by 1 to ensure the loop stop running on getting to 4.
}
return 0;
}
