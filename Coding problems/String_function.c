#include <stdio.h>
#include <string.h>
/**
 * main - string functions
 * 
 * Return: Always 0
 */
int main(void)
{
    char s1[] = "I am tired right now and";
    char s2[] = "I am tired right and need to rest.";
    int n, num1, len;

    num1 = strcmp(s1, s2);
    printf("%d\n", num1);

    return(0);
}