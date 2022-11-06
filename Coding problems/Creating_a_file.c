#include <stdio.h>
/**
 * main - creating a file in writing mode
 * 
 * Return: Always 0
 */
int main(void)
{
    FILE *fp;
    fp = fopen("data.txt", "w");

    return(0);
}