#include <stdio.h>

/**
 * main - counts arguments
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 if success 
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
    if(argc > 0)
    printf("argc is %d\n", argc - 1);
    return(0);
}