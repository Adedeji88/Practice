#include <stdio.h>

/*
* main - operations on pointers
*
* Return: Always 0
*/
int main(void)
{
    int a = 40;
    int *b;
    int c = 2 * a;
    int *d;
    int diff;

    printf("Value of a before increment: %d\n", a); /*value of a */
    printf("Address of a: %p\n", &b);/* address of a */
    printf("Value of c: %d\n", c);
    printf("Address of c: %p\n", &d);

    if(b > d)
    {
        printf("b is greater than d\n");
    }
    else
    {
        printf("d is greater than b\n");
    }

    a++;

    printf("Value of a after increment: %d\n", a);
    printf("Address of a after increment: %p\n", &b);

    a--;

    printf("Value of a after decrement: %d\n", a);
    printf("Address of a after decrement: %p\n", &b);

    a *= 2;

    printf("Value of a after multiplication: %d\n", a);
    printf("Address of a after multiplication: %p\n", &b);

    diff = d - c;

    printf("Value of diff is: %d\n", diff);
    printf("Address of diff is: %p\n", &diff);


    return(0);
}
