#include <stdio.h>
#include <string.h>
/**
 * main - string functions
 * 
 * Return: Always 0
 */
int main(void)
{
    const char str[] = "Today is Sunday!";
    int len;
    const char ch = 'a';
    char *ptr;
    ptr = strchr(str, ch);

    len = strlen(str);
    printf("Length of the string: %d\n", len);
    printf("String starting from %c: %s\n", ch, ptr);

    return(0);
}