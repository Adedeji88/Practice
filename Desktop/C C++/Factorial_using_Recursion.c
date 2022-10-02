#include <stdio.h>

long int product(int k);

int main(void) 
{

int k;
   printf("Type the value of k and press Enter: ");
   scanf("%d", &k);

int result = product(k);
   printf("Factorial of %d = %ld", k, result);
}

long int product(int k) {
if (k > 0) {
    return k * product(k - 1);
} else {
    return 1;
}

}


