#include <stdio.h>
/*
 * main - reading and writing with getc and putc
 * 
 * Return: Always 0 
*/
int main(void)
{
    FILE *fp;
    char c;
    printf("File Handling\n");
    /* open a file */
    fp = fopen("demo.txt", "w");
    /* writing operation */
    while((c = getchar()) != EOF)
    {
        putc(c, fp);
    }
    /* close file */
    fclose(fp);
    printf("Data Entered:\n");
    /* reading */
    fp = fopen("demo.txt", "r");
    while((c =getc(fp)) != EOF)
    {
        printf("%c", c);
    }
    fclose(fp);
    return(0);
}