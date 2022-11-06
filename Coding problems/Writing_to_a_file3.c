#include <stdio.h>
/**
 * main - Writing to a file using fprintf
 * 
 * Return(0): Always 0
 */
int main(void)
{
    FILE *fptr;
    fptr = fopen("fprintf_test.txt", "w");
    fprintf(fptr, "Today is first Sunday of the month\n");
    fclose(fptr);
    return(0);
}