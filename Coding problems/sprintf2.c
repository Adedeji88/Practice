#include <stdio.h>
/**
 * main - print the number of employees in a company
 * using sprintf()
 * 
 * Return: Always 0
 */
int main(void)
{
    char info[150];
    char comp[] = "MTN"; /* comp stands for company */
    int emp = 1200;
    sprintf(info, "The %s company has %d employees.", comp, emp);
    printf("%s\n", info);

    return(0);
}