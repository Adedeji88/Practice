#include <stdio.h>
#include <unistd.h>

/**
 * main - a program that executes ls-l command
 * 
 * Return: Always 0
 */
int main(void)
{
    char *argv[] = {"/bin/ls", "-l", NULL};

    int val = execve(argv[0], argv, NULL);

    if(val == -1)
        perror("Error");

    printf("Done with execve\n");

    return(0);
}