#include <stdio.h>
void print_rev(char *s)
{
    int len = 0;
    int i;
    while(s != '\0')
    {
        len++;
        s++;
    }
    s--;
    for (i = len; i > 0; i--)
    {
        putchar(*s);
        s--;
    }
    putchar('\n');
}
void print_rev(char *s);
#include <stdio.h>
int main(void)
{
    char *word;
    int len;

    printf("Enter word to be reversed: ");
    scanf("%s", &word);

    word = print_rev(char *word);

    printf("Reversed word is: %s", word);

    return(0);
}
