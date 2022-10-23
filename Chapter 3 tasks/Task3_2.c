/* Find out whether a student passed or failed */
#include <stdio.h>
int main(void)
{
    int mark_1, mark_2, mark_3;

    printf("Enter the marks of student in three subjects: ");
    scanf("%d %d %d", &mark_1, &mark_2, &mark_3);

    if((mark_1 >= 33) && (mark_1 <= 40))
    {
        printf("Student passed\n");
    }
    else
    {
        printf("Student failed\n");
    }
    if((mark_2 >= 33) && (mark_2 <= 40))
    {
        printf("Student passed\n");
    }
    else
    {
        printf("Student failed\n");
    }
    if((mark_3 >= 33) && (mark_3 <= 40))
    {
        printf("Student passed\n");
    }
    else
    {
        printf("Student failed\n");
    }
    
    return(0);
}