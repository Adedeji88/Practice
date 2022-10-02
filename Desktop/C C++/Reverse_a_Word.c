#include <stdio.h>
void print_rev(char *s)
{
    int len = 0;
    int i;

    /* iterate to find length of string and point to last character */
    while(s != '\0')
    {
        len++;
        s++;
    }
    /* go back to character before null character */
    s--;

    /* print string reversed */
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
    char word[100];
    char *s;

    printf("Enter word to be reversed: ");
    scanf("%s", &word);

    word = print_rev(char *s);

    printf("Reversed word is: %s", word);

    return(0);
}
