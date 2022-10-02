#include <stdio.h>
int main() {
int i = 10;

do {
    printf("do_while: i is %d\n", i);
    i++;
}

while (i < 10);
printf("all done\n");

return 0;
}