#include <stdio.h>
/**
 * main - input and output with getchar()
 * putchar(), gets(), and puts() functions
 *
 * Return: Always 0
 */
int main(void)
{
    char c, str[100];

    printf("Enter a character: ");
    c = getchar();

    printf("\nYou entered: ");
    putchar(c);

    printf("\nEnter a string of characters: ");
    scanf("%s", str);

    printf("\nYou entered: ");
    puts(str);

    return(0);
}
