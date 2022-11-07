#include <stdio.h>
#include <string.h>
/*
* main - locate a character in a string 
* using strchr
*
* Return: Always 0
*/
int main(void)
{
	const char str[] = "Here I am";
	const char ch;
	char *ptr;
	
	printf("Enter the character to be located: ");
	scanf("%c", ch);
	
	ptr = strchr(str, ch);
	printf("The first occurrence of %c in %s string: %s", ch, str, ptr);
	return(0);
}