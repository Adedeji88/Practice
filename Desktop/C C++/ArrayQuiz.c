#include <stdio.h>

/** 
* main - accepts the marks of five students
*
*Return: Always 0
*/

int main(void)
{
    int marks[] = {marks[0], marks[1], marks[2], marks[3], marks[4]}; 

    printf("Enter the mark of each student: ");
    scanf("%d\n", &marks[0]);
    scanf("%d\n", &marks[1]);
    scanf("%d\n", &marks[2]);
    scanf("%d\n", &marks[3]);
    scanf("%d\n", &marks[4]);

    printf("The mark of first student is: %d\n", marks[0]);
    printf("The mark of second student is: %d\n", marks[1]);
    printf("The mark of third student is: %d\n", marks[2]);
    printf("The mark of fourth student is: %d\n", marks[3]);
    printf("The mark of fifth student is: %d\n", marks[4]);

    return(0);
}