#include <stdio.h>
/**
 * main - find greatest of four numbers
 * Return: Always 0
 */
int main(void)
{
    int num1, num2, num3, num4;

    printf("Enter the values of num1, num2, num3, and num4: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    if((num1 > num2) && (num1 > num3) && (num1 > num4))
    {
        printf("num1 is the greatest");
    }
    else if((num2 > num1) && (num2 > num3) && (num2 > num4))
    {
        printf("num2 is the greatest");
    }
    else if((num3 > num1) && (num3 > num2) && (num3 > num4))
    {
        printf("num3 is the greatest");
    }
    else if((num4 > num1) && (num4 > num2) && (num4 > num3))
    {
        printf("num4 is the greatest");
    }
    else
    {
        printf("They are all equal");
    }
    return(0);
}