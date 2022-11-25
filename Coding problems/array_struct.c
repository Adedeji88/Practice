#include <stdio.h>
/**
 * main - program demonstrating array of 
 * structures
 * 
 * Return: Always 0
 */
struct student
{
    int rollno;
    char name[20];
    float marks;
};
int main(void)
{
    struct student s[3]; /* Array of structures with 3 elements*/
    
    /* Inputting each element with for loop */
    for(int i = 0; i < 3; i++)
    {
        printf("Enter student's roll number, name, and marks: ");
        scanf("%d %s %f", &s[i].rollno, s[i].name, &s[i].marks);
    } 
    /* Printing each student's info with for loop */
    for(int i = 0; i < 3; i++)
    {
        printf("Student's info: ");
        printf("\n%d %s %f\n", s[i].rollno, s[i].name, s[i].marks);
    }

   return(0);
}