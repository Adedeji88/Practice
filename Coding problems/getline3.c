#include <stdio.h>
#include <stdlib.h>

/**
 * main - Read a string of text 
 * using getline() function
 * 
 * Return: Always 0
 */

int main(void)
{
    char *buffer;
    size_t bufsize = 1024;
    size_t characters;

    buffer = (char *)malloc(bufsize * sizeof(char));
    if(buffer == NULL)
    {
        perror("Unable to allocate buffer");
        exit(1);
    }

    printf("Type something: ");
    characters = getline(&buffer, &bufsize, stdin);
    printf("%zu characters were read.\n", characters);
    printf("You typed: '%s'\n", buffer);

    free(buffer);

    return(0);
}