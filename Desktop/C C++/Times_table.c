#include <stdio.h>

int main(void)
{
    int i, j, prod;

    for(i = 1; i <= 6; i++)
    {
        for(j = 1; j <=6; j++)
        {
            prod = i * j;
            
            if(prod < 6)
            {
                printf("%d\t", prod);
                printf("\t");  
            }
            else 
            {
                printf("%d\t", prod);
                printf("\t");
            }
        }
    }
    printf("\n");

    return(0);
}