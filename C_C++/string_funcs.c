#include <stdio.h>
#include <string.h>

/**
* main - string functions
*
* Return: Always 0.
*/
int main(void)
{
	char s1[] = "Today is Friday";
	char s2[] = ". Weekend starts. ";
	int len, n;
	
	strcat(s1, s2);
	printf("%s\n", s1);
	len = strlen(s1);
	printf("%d\n", len);
	strcpy(s1, s2);
	printf("s1 is now %s\n", s1);
	
	return(0);
}