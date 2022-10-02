#include <stdio.h>
/**
 * main - prints arguments passed into it 
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 if success
 */
int main(int argc, int *argv[])
{
    int i;
    for(i = 0; i < argc; i++)
    {
        printf("argv[%d] is %s\n", i, argv[i]);
    }
    return(0);
}