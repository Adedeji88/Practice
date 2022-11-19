#include <stdio.h>
#include <unistd.h>

/**
 * main -
 * 
 * Return: Always 0 
 */

int main(void)
{
    pid_t pid;
    pid_t ppid;

    /* Written before fork was called */

    /* called fork */
    pid = fork();
    if(pid == -1)
    {
        perror("Unsuccessful\n");
        return(1);
    } 

    if(pid == 0)
    {
        sleep(40);
        printf("I am the child\n");
    }

    else
    {
        ppid = getpid();
        printf("Parent pid is: %u\n", ppid);
    }

    return(0);
}