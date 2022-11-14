#include <string.h>
#include <stdio.h>

/**
 * main - demonstrate the us eof strtok()
 * function to spilt a string
 * 
 * Return: Always 0
 */

int main(void)
{
    char str[80] = "Hello - good morning mum - and everyone";
    const char s[2] = "-";
    char *token;

    /* get the first token*/
    token = strtok(str, s);

    /* walk through othe tokens*/
    while(token != NULL)
    {
        printf("%s\n", token);

        token = strtok(NULL, s);
    }

    return(0);
}