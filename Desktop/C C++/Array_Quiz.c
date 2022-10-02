#include <stdio.h>
const int ROW;
const int COLUMN;

int main(void)
{
    int a_ray[ROW][COLUMN];
    int j;

    for(int i = 0; i < ROW; ++i)
    {
        printf("ROW %d, COLUMN %d: ", i, j);
        scanf("%d", &a_ray[i][j]);
    }
    printf("Displaying values: ");

    for(int i = 0; i < ROW; ++i)
    {
        printf("ROW %d, COLUMN %d = %d\n", i, j, a_ray[i][j]);
    }
    return(0);
}
