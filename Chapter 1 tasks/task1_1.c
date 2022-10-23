#include <stdio.h>

int main(void)
{
    int area, l, b;

    printf("Enter the values of l and b: ");
    scanf("%d %d", &l, &b);

    area = l * b;

    printf("The area of the rectangle is: %d square units", area);

    return(0);
}