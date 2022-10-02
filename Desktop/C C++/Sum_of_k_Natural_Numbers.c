#include <stdio.h>

long int sum(int k);  //k is the number of natural numbers
int main() {
int k;
    printf("Type the number and press Enter: ");
    scanf("%d", &k);

int result = sum(k);
    printf("Sum of the natural numbers is: %d", result);
}

long int sum(int k) {
if(k >= 0) {
    return k + sum (k - 1);
} else {
    
    return 0;  
}

}