/* Sunday greetings*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char greetings [] = "Happy Sunday!";
    float time = 7.00;
    float *ptr = &time;

    system("cls");
    printf("%s\n", greetings);
    printf("Hope you're getting ready for the next tasks on \"Pointers, arrays, and strings\".\n");
    printf("%0.2f\n", time);
    printf("%p\n", ptr);

    return(0);
}