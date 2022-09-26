#include <stdio.h>
/**
 * main - check whether char is lowercase
 * @c: char to check
 * Return: Always 0
 */
int main(void)
{
    char c;

    printf("Enter the character: ");
    scanf("%c", &c);

    if((c >= 'a') && (c <= 'z'))
    {
        printf("Entered character is a lowercase");
    }
    else
    {
        printf("Entered character is uppercase");
    }
    return(0);
}