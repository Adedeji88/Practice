#include  <stdio.h>
/**
 *main - Entry point
 *Description: Takes user's name and greets
 *them
 *Return: Always 0 (Success)
*/
int main(void)
{
    char First_Name[45];
    
    printf("Please enter your first name: \n");
    scanf("%s", &First_Name);
    printf("Good morning, %s.\n", First_Name);
    
    return (0);
}