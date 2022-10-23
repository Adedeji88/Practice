#include <stdio.h>
int main(void)
{
    char str[80], ch;

    printf("Enter string: ");
    scanf("%s", str);

    while(getchar() != '\n');

    printf("Enter character: ");
    ch = getchar();

    printf("%s\n", str);

    printf("%c", ch);

    return(0);
}