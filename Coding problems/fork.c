#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Demonstrating the use of fork()
 * function
 * 
 * Return: ALways 0
 */
int main(int argc, char* argv[])
{
    fork();
    fork();
    fork();
    printf("Hello world.\n");

    return(0);
}