#include <stdio.h>
/** 
 * main - Use sscanf() to store data
 * 
 * Return: Always 0.
 */
int main(void)
{
    char info[] = "Yaba Lagos 20000000";
    char city[60];
    char state[60];
    int population;
    sscanf(info, "%s %s %d", city, state, &population);
    printf("%d people live in %s, %s.", population, city, state);

    return(0);
}