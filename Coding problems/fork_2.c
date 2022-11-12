#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Demonstrating the use of fork()
 * function and PID
 * 
 * Return: ALways 0
 */
int main(int argc, char* argv[])
{
    int id = fork();
    printf("Hello world from id: %d\n", id);

    return(0);
}