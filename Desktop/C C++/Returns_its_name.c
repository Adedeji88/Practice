#include <stdio.h>
/**
 * main - prints its name
 * @argc: argument counter
 * @argv: argument vector
 * return: 0 on success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
    printf("%s", *argv);
    return(0);
}