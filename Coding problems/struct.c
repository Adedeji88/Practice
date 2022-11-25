#include <stdio.h>
/**
 * main - program to demonsrate the use of
 * structure
 * 
 * Return: Always 0
 */
struct Birthday
{
    char name[50];
    int age;
    char yr[6];
};

int main(void)
{
    struct Birthday H1;
    struct Birthday H2;
    
    printf("Enter your name, age in years: ");
    scanf("%s %d %s", H1.name, &H1.age, H1.yr);
    printf("Enter your name, age in years: ");
    scanf("%s %d %s", H2.name, &H2.age, H2.yr);

    printf("Info for H1");
    printf("\n%s %d %s", H1.name, H1.age, H1.yr);
    printf("\nInfo for H2");
    printf("\n%s %d %s\n", H2.name, H2.age, H2.yr);

    return(0);
}