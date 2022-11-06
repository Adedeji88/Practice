#include <stdio.h>
/**
 * main - writing to a file using fputc
 * 
 * Return: Always 0
 */
int main(void)
{
    int i;
    FILE *fptr;
    char fn[100];
    char str[] = "Adedeji is who I am\n";
    fptr = fopen("fputc_test.txt", "w");

    for(i = 0; str[i] != '\n'; i++)
    {
        fputc(str[i], fptr);
    }
    fclose(fptr);
    return(0);
}