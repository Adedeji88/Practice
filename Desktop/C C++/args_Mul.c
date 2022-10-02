#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - print product of argument numbers
 * @argc: argument counter
 * @argv: numbers to multiply
 * Return: 0 on success, 1 if two arguments not given
 */

int main(int argc, char *argv[])
{
    if(argc != 3)
    {
        printf("Error\n");
        return(1);
    }
    printf("%d", argv[1] * argv[2]);
    return(0);
}