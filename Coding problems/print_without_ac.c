#include <stdio.h>

/**
 * main - a program that prints arguments
 * without using ac 
 * 
 * Return: Always 0
 */
int main(int ac, char **av)
{
    int i;
    for(i = 0; i < ac; i++)
    {
        (void) ac;
        printf("%s\n", av[i]);
    }
    return(0);
}