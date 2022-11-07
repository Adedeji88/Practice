#include <stdio.h>
/**
 * main - reading data from a file
 * using fgetc, fgets, fprintf
 * 
 * ReturnL Always 0
 */
int main(void)
{
    FILE * file_pointer;
    char buffer[100], c;
    char str1[15], str2[10], str3[15], str4[22], str5[2], str6[5], str7[10]; 
    file_pointer = fopen("fprintf_test.txt", "r");
    printf("----read a line----\n");
    fgets(buffer, 100, file_pointer);
    printf("%s\n", buffer);

    printf("----read and parse data----\n");
    file_pointer = fopen("fprintf_test.txt", "r"); /* reset the pointer */
    fscanf( file_pointer, "%s %s %s %s %s %s %s", str1, str2, str3, str4, str5, str6, str7);
    printf("Read String1 |%s|\n", str1);
    printf("Read String2 |%s|\n", str2);
    printf("Read String3 |%s|\n", str3);
    printf("Read String4 |%s|\n", str4);
    printf("Read String5 |%s|\n", str5);
    printf("Read String6 |%s|\n", str6);
    printf("Read String7 |%s|\n", str7);

    printf("----read the entire file---");
    /* reset the pointer */
    file_pointer = fopen("fprintf_test.txt", "r");
    while((c = fgetc(file_pointer)) != EOF)
    printf("%c", c);

    fclose(file_pointer);
    return(0);
}