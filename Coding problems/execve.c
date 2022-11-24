#include <unistd.h>

/**
 * main - demonstrates the use of
 * execve function
 * Return: Always 0 
 */
int main(void)
{
    char *binaryPath = "/bin/bash";
    char *const args[] = {binaryPath, "-c", "echo "visit $HOSTNAME: $PORT from your browser."", NULL};
    char *const env[] = {"HOSTNAME= www.linuxhint.com", "PORT = 8080", NULL};

    execve(binaryPath, args, env);

    return(0);
}