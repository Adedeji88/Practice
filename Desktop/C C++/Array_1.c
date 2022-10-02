#include <stdio.h>
/**
* main - Accessing the different elements of an array
*
* Return: Always 0
*/
int main(void)
{
    int t[5];

    t[0] = 98;
    t[1] = 198;
    t[2] = 298;
    t[3] = 398;
    t[4] = 498;

    printf("Value of t[0] is: %d\n", t[0]);
    printf("Value of t[1] is: %d\n", t[1]);
    printf("Value of t[2] is: %d\n", t[2]);
    printf("Value of t[3] is: %d\n", t[3]);
    printf("Value of t[4] is: %d\n", t[4]);
    printf("Address of 't[0]' is: %p\n", &(t[0]));
    printf("Address of 't[1]' is: %p\n", &(t[1]));
    printf("Address of 't[2]' is: %p\n", &(t[2]));
    printf("Address of 't[3]' is: %p\n", &(t[3]));
    printf("Address of 't[4]' is: %p\n", &(t[4]));

    return(0);
}