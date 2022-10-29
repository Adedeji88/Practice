#include <stdio.h>
/**
 * main - print the number of students in a class 
 * with sprintf()
 * 
 * Return: Always 0. 
 */
int main(void)
{
    char info[115];
    char class[] = "Science";
    int emp = 17;
    sprintf(info, "The %s class has %d students.", class, emp);
    printf("%s\n", info);

    return(0);
}