#include <stdio.h>
#include <string.h>
/**
* main - string functions
*
* Return: Always 0.
*/
int main(void)
{
	char s1[] = "Welcome home, ";
	char s2[] = "young man!";
	int n;
	
	printf("Enter the value of n: ");
	scanf("%d", &n);
	strncpy(s1, s2, n);
	printf("s1 is now %s \n", s1);
	strncat(s1, s2, n);
	printf("%s\n", s1);
	
	return(0);
}