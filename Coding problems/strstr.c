#include <stdio.h>
#include <string.h>
/**
 * main - search a string in another string 
 * using strstr() function
 * 
 * Return: Always 0
 */
int main(void)
{
    const char str[] = "Welcome, Mr John!";
    const char searchString[] = "come";
    char *result;

    result = strstr(str, searchString);
    printf("The substring starting from the given string: %s\n", result);

    return(0);
}