#include <stdio.h>
/**
 * main - Creating a file in reading mode
 * 
 * Return: Always 0 
 */
int main(void)
{
    FILE *fp;
    fp = fopen("new_data.txt", "r");
    fclose(fp);

    return(0);
}