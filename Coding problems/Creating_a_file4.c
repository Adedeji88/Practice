#include <stdio.h>
/**
 * main - creating an output file
 * for program KM-mile_conversion_batchMode.c
 * 
 * Return: Always 0
 */
int main(void)
{
    FILE *fp;
    fp = fopen("myoutput.txt", "w");
    fclose(fp);

    return(0);
}