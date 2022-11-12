#include <stdio.h>
#include <unistd.h>

/**
 * main - PPID
 * 
 * Return: Always 0
 */

int main(void)
{
    pid_t my_pid, my_ppid;

    my_pid = getpid();
    my_ppid = getppid();
    printf("child process id: %u\n", my_pid);
    printf("parent process id: %u\n", my_ppid);
    return(0);
}