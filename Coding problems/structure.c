#include <stdio.h>

/**
 * main - program to demonstrate the use of
 * struct
 * 
 * Return: Always 0
 */
struct Birthday
{
    char name[50];
    int age;
    const char yr[6];
};

int main(void)
{
    struct Birthday H1 = {"Dad", 80, "years"};
    struct Birthday H2 = {"Mom", 67, "years"};

    printf("Birthday info for H1");
    printf("\n%s %d %s", H1.name, H1.age, H1.yr);
    printf("\nBirthday info for H2");
    printf("\n%s %d %s", H2.name, H2.age, H2.yr);

    return(0); 
}