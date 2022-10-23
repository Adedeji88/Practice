#include <stdio.h>
/**
 * main - calculating leap year 
 * Return: Always 0
 */
int main(void)
{
    int year;

    printf("Enter the year: ");
    scanf("%d", &year);

    if((year % 4) == 0)
    {
        printf("Entered year is a leap year");
    }
    else
    {
        printf("Entered year is not a leap year");
    }
    return(0);
}