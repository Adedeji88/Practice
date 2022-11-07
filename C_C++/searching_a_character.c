#include <stdio.h>
#include <string.h>
/*
* main -search for a character in a given string
* using strchr
*
* Return: Always 0
*/
int main(void)
{
	const char str[] = "This is me";
	const char ch;
	char *p;
	
	printf("Enter character to be searched: ");
	scanf("%c", &ch);
	
	p = strchr(str, ch);
	if(p != NULL)
	{
		printf("%c character is found in |%s| string", ch, str);
	}
	else
	{
		printf("%c is not found in |%s| string", ch, str);
	}
	return(0);
}