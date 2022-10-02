#include <stdio.h>
int print_last_digit(int n)                                                                                                             
{                                                                                                                                       
    _putchar('0' + _abs(n % 10));                                                                                                  
    return (_abs(n % 10));

int main(void)
{
    int m, r;

    printf("Enter the value of m: ");
    r = print_last_digit(m);
    putchar('0' + r);
}
