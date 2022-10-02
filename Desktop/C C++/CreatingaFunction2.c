#include <stdio.h>
int myFunction(int x, int y) {
  return x + y;
}
int main() {
  int result = myFunction(3, 5);
  printf("Result is: %d", result);
  return 0;
}