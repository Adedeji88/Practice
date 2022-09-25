/* A program to check whether a number is divisible by 97 or not */
#include <stdio.h>
int main(void)
{
    int num;

    printf("Enter the value of num: ");
    scanf("%d", &num);

    if ((num % 97) == 0)
    {
        printf("Number is divisible by 97");
    }
    else
    {
        printf("Number is indivisible by 97");
    }
    
    return(0);
}  