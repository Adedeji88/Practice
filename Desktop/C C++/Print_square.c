#include <stdio.h>

int main(void)
{
    int i, j, size; 

    printf("Enter the size: ");
    scanf("%d", size);

    if(size <= 0)
    {
        putchar('\n');
    }
    else
    {
        for(i = 0; i < size; i++)
        {
            for(j = 0; j < size; j++)
            {
                putchar('#');
            }    
            putchar('\n');        
        }
    }
    return(0);
}