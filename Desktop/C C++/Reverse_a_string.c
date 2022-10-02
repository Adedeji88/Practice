#include <stdio.h>
#include <string.h>

int main(void)
{
    char t[150];

    printf("Enter the word or sentence to be reversed: ");
    gets(t);

    strrev(t);

    printf("Reversed word or sentence is: %s", t);

    return(0);
}