#include <stdio.h>
/**
 * main - Writing to a file using fputs  
 * 
 * Return: Always 0
 */
int main(void)
{
    FILE *fp;
    fp = fopen("fputs_test.txt", "w+");
    fputs("Here are am I, mister, ", fp);
    fputs("I am back for good\n", fp);
    fputs("Made a great sacrifice for you\n", fp);
    
    fclose(fp);
    return(0);
}