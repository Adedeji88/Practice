#include <stdio.h>
int main() {
int i = 70;

do {
   printf("do_while: i is  %d\n", i);
   i++;
}

while (i < 77);
printf("All done!\n");

return 0;

}