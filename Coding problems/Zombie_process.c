#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

/**
 * main - A C program to demonstrate Zombie process 
 * Child becomes Zombie as parent is sleeping
 * when child exits
 * 
 * Return: Always 0
 */

int main(void)
{
    /* Fork returns process id in parent process */
    pid_t child_pid = fork();

    /* Parent process */
    if(child_pid > 0)
        sleep(50);

    /* Child process */
    else
        exit(0);
    
    return(0);
}